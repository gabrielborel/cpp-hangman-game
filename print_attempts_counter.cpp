#include <iostream>
#include "print_attempts_counter.hpp"

void print_attempts_counter(
    const std::vector<char> &wrong_guesses,
    const int ATTEMPTS_LIMIT
) {
    std::cout << "Attempts: " << wrong_guesses.size() + 1 << " of " << ATTEMPTS_LIMIT << std::endl;
}
