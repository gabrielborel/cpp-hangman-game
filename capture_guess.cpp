#include <iostream>
#include "capture_guess.hpp"
#include "check_letter_exists.hpp"

void capture_guess(
    const std::string &secret_word,
    std::array<char, 6> &wrong_guesses,
    std::map<char, bool> &secret_word_guessed_letters
) {
    std::cout << "Type a letter: ";
    char letter;
    std::cin >> letter;
    std::cout << std::endl;

    int number_of_wrong_guesses = 0;
    for (char guess: wrong_guesses)
        if (guess != '\0') number_of_wrong_guesses++;

    if (check_letter_exists_on_secret_word(letter, secret_word))
        secret_word_guessed_letters[letter] = true;
    else
        wrong_guesses[number_of_wrong_guesses + 1] = letter;
}
