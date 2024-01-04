#ifndef CAPTURE_GUESS_HPP
#define CAPTURE_GUESS_HPP

#include <array>
#include <string>
#include <map>

void capture_guess(
    const std::string &secret_word,
    std::array<char, 6> &wrong_guesses,
    std::map<char, bool> &secret_word_guessed_letters
);

#endif
