#include <iostream>
#include <string>
#include "capture_guess.hpp"
#include "check_loss_condition.hpp"
#include "check_win_condition.hpp"
#include "generate_random_word.hpp"
#include "print_attempts_counter.hpp"
#include "print_secret_word.hpp"
#include "print_wrong_guesses.hpp"

constexpr int ATTEMPTS_LIMIT = 6;
std::map<char, bool> secret_word_guessed_letters;
std::vector<char> wrong_guesses;

int main()
{
	std::cout << "Welcome to the Hangman Game!" << std::endl
						<< std::endl;

	const std::string secret_word = generate_random_word();

	while (
			!check_loss_condition(secret_word, wrong_guesses, ATTEMPTS_LIMIT) &&
			!check_win_condition(secret_word, secret_word_guessed_letters))
	{
		print_attempts_counter(wrong_guesses, ATTEMPTS_LIMIT);
		print_word(secret_word, secret_word_guessed_letters);
		print_wrong_guesses(wrong_guesses);

		capture_guess(secret_word, wrong_guesses, secret_word_guessed_letters);
	}
}
