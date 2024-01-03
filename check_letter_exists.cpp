#include "check_letter_exists.hpp"

bool check_letter_exists_on_secret_word(char guessed_letter, std::string secret_word)
{
	for (char letter : secret_word)
	{
		if (guessed_letter == letter)
		{
			return true;
		}
	}
	return false;
}
