#ifndef PRINT_SECRET_WORD_HPP
#define PRINT_SECRET_WORD_HPP

#include <string>
#include <map>

void print_word(const std::string &secret_word, std::map<char, bool> secret_word_guessed_letters);

#endif