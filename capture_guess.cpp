#include <iostream>
#include "capture_guess.hpp"
#include "check_letter_exists.hpp"

void capture_guess(std::string secret_word, std::vector<char> *wrong_guesses, std::map<char, bool> *secret_word_guessed_letters)
{
	std::cout << "Type a letter: ";
	char letter;
	std::cin >> letter;
	std::cout << std::endl;

	if (check_letter_exists_on_secret_word(letter, secret_word))
		(*secret_word_guessed_letters)[letter] = true;
	else
		(*wrong_guesses).push_back(letter);
}
