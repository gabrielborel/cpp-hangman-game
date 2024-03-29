#ifndef CHECK_WIN_CONDITION_HPP
#define CHECK_WIN_CONDITION_HPP

#include <string>
#include <map>

bool check_win_condition(const std::string &secret_word, std::map<char, bool> secret_word_guessed_letters);

#endif
