#ifndef CHECK_LOSS_CONDITION_HPP
#define CHECK_LOSS_CONDITION_HPP

#include <string>
#include <array>
#include <iostream>

bool check_loss_condition(const std::string& secret_word, const std::array<char, 6>& wrong_guesses);

#endif