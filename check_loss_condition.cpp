#include <iostream>
#include "check_loss_condition.hpp"

bool check_loss_condition(
    const std::string &secret_word,
    const std::array<char, 6> &wrong_guesses
) {
    int number_of_guesses = 0;
    for (char guess: wrong_guesses)
        if (guess != '\0') number_of_guesses++;

    if (number_of_guesses + 1 > wrong_guesses.max_size()) {
        std::cout << "You lost the game! The secret word were " << secret_word << std::endl;
        return true;
    }

    return false;
}
