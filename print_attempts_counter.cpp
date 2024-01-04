#include <iostream>
#include "print_attempts_counter.hpp"

void print_attempts_counter(const std::array<char, 6> &wrong_guesses) {
    int number_of_wrong_guesses = 0;
    for (char guess: wrong_guesses)
        if (guess != '\0') number_of_wrong_guesses++;

    std::cout << "Attempts: " << number_of_wrong_guesses + 1 << " of " << wrong_guesses.max_size() << std::endl;
}
