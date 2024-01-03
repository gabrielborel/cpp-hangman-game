#include "check_win_condition.hpp"

bool check_win_condition(std::string secret_word, std::map<char, bool> secret_word_guessed_letters)
{
	bool all_letters_correct = true;
	for (char letter : secret_word)
	{
		if (!secret_word_guessed_letters[letter])
			all_letters_correct = false;
	}

	if (all_letters_correct)
		std::cout << "You won the game! The secret word were " << secret_word << std::endl;

	return all_letters_correct;
}
