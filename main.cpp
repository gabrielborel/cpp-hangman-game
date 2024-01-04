#include <iostream>
#include <string>
#include <array>
#include "capture_guess.hpp"
#include "check_loss_condition.hpp"
#include "check_win_condition.hpp"
#include "generate_random_word.hpp"
#include "print_attempts_counter.hpp"
#include "print_secret_word.hpp"
#include "print_wrong_guesses.hpp"

std::map<char, bool> secret_word_guessed_letters;
std::array<char, 6> wrong_guesses;

int main() {
    std::cout << "Welcome to the Hangman Game!" << std::endl
            << std::endl;

    const std::string secret_word = generate_random_word();

    while (
        !check_loss_condition(secret_word, wrong_guesses) &&
        !check_win_condition(secret_word, secret_word_guessed_letters)) {
        print_attempts_counter(wrong_guesses);
        print_word(secret_word, secret_word_guessed_letters);
        print_wrong_guesses(wrong_guesses);

        capture_guess(secret_word, wrong_guesses, secret_word_guessed_letters);
    }
}
