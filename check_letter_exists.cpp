#include "check_letter_exists.hpp"

bool check_letter_exists_on_secret_word(
    const char guessed_letter,
    const std::string &secret_word
) {
    for (const char letter: secret_word) {
        if (guessed_letter == letter) {
            return true;
        }
    }
    return false;
}
