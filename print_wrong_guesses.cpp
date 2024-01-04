#include <iostream>
#include "print_wrong_guesses.hpp"

void print_wrong_guesses(const std::array<char, 6>& wrong_guesses) {
    std::cout << "Letters guessed: " << std::endl;
    for (const char letter: wrong_guesses) {
        if (letter == '\0') continue;
        std::cout << letter << " ";
    }
    std::cout << std::endl
            << std::endl;
}
