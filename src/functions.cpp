#include "include/functions.h"
#include <cstdint>
#include <string>
#include <cmath>

/*
Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

1634 = 1^4 + 6^4 + 3^4 + 4^4
8208 = 8^4 + 2^4 + 0^4 + 8^4
9474 = 9^4 + 4^4 + 7^4 + 4^4

As 1 = 1^4 is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316.

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/

namespace func {
    bool is_sum_of_nth_power_of_digits(uint64_t num, int power) {
        std::string num_str = std::to_string(num);
        uint64_t sum_of_powers_of_digits = 0;
        for (char digit_char : num_str) {
            sum_of_powers_of_digits += std::pow((digit_char - 48), power);
        }
        return sum_of_powers_of_digits == num;
    }
}