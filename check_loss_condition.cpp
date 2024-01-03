#include <iostream>
#include "check_loss_condition.hpp"

bool check_loss_condition(
    const std::string &secret_word,
    const std::vector<char> &wrong_guesses,
    const int ATTEMPTS_LIMIT
) {
    if (wrong_guesses.size() + 1 > ATTEMPTS_LIMIT) {
        std::cout << "You lost the game! The secret word were " << secret_word << std::endl;
        return true;
    }
    return false;
}
