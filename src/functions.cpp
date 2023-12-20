#include "include/functions.h"
#include <cstdint>
#include <string>
#include <cmath>

namespace func {
    bool is_sum_of_nth_power_of_digits(uint64_t num, int power) {
        std::string num_str = std::to_string(num);
        uint64_t sum_of_powers_of_digits = 0;
        for (char digit_char : num_str) {
            sum_of_powers_of_digits += std::pow((digit_char - 48), power);
        }
        return sum_of_powers_of_digits == num;
    }

    uint64_t sum_of_nth_power_of_digits(uint64_t num, int power) {
        std::string num_str = std::to_string(num);
        uint64_t sum_of_powers_of_digits = 0;
        for (char digit_char : num_str) {
            sum_of_powers_of_digits += std::pow((digit_char - 48), power);
        }
        return sum_of_powers_of_digits;
    }

    uint64_t find_upper_search_boundary(int power) {
        char digit_9 = '9';
        int counter = 1;
        uint64_t upper_bound = 0;
        while (true) {
            std::string current_max_value_as_str = std::string(counter, digit_9);
            uint64_t power_sum_of_current_max_value = sum_of_nth_power_of_digits(std::stoull(current_max_value_as_str), power);
            int digit_count_power_sum = static_cast<int>(std::to_string(power_sum_of_current_max_value).length());
            if (digit_count_power_sum <= counter) {
                upper_bound = power_sum_of_current_max_value;
                break;
            }
            counter++;
        }
        return upper_bound;
    }

    uint64_t find_answer(int power) {
        uint64_t result = 0;
        uint64_t upper_search_bound = find_upper_search_boundary(power);
        for (uint64_t i = 10; i < upper_search_bound; i++) {
            if (func::is_sum_of_nth_power_of_digits(i, power)) {
                result += i;
            }
        }
        return result;
    }
}