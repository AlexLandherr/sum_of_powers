#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    bool is_sum_of_nth_power_of_digits(uint64_t num, int power);
    uint64_t sum_of_nth_power_of_digits(uint64_t num, int power);
    uint64_t find_upper_search_boundary(int power);
    uint64_t find_answer(int power);
}

#endif