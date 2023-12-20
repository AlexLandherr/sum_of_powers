#include "include/functions.h"
#include <iostream>
#include <cstdint>
#include <numeric>
#include <vector>

/*
Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

1634 = 1^4 + 6^4 + 3^4 + 4^4
8208 = 8^4 + 2^4 + 0^4 + 8^4
9474 = 9^4 + 4^4 + 7^4 + 4^4

As 1 = 1^4 is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316.

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/

int main() {
    /* int power = 4;
    uint64_t num = 9474;
    std::cout << "Can " << num << " be written as the sum of " << power << "th power of its digits?:" << '\n';
    std::cout << std::boolalpha << func::is_sum_of_nth_power_of_digits(num, power) << '\n'; */
    //std::cout << func::sum_of_nth_power_of_digits(99, 5) << '\n';
    //std::cout << func::find_upper_search_boundary(5) << '\n';
    /* std::vector<uint64_t> qualifiers;
    const int power_val = 5;
    for (uint64_t i = 10; i < 354294; i++) {
        if (func::is_sum_of_nth_power_of_digits(i, power_val)) {
            qualifiers.push_back(i);
        }
    }
    uint64_t sum_of_qualifiers = std::accumulate(qualifiers.begin(), qualifiers.end(), 0); */
    std::cout << "The sum of all the numbers that can be written as the sum of fifth powers of their digits is:" << '\n';
    std::cout << func::find_answer(5) << '\n';

    return 0;
}