#ifndef CAPTURE_GUESS_HPP
#define CAPTURE_GUESS_HPP

#include <vector>
#include <string>
#include <map>

void capture_guess(const std::string &secret_word, std::vector<char> &wrong_guesses, std::map<char, bool> &secret_word_guessed_letters);

#endif