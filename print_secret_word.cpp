#include "print_secret_word.hpp"
void print_word(std::string secret_word, std::map<char, bool> secret_word_guessed_letters)
{
	std::cout << std::endl
						<< std::endl;

	for (char secret_word_letter : secret_word)
	{
		if (secret_word_guessed_letters[secret_word_letter])
		{
			std::cout << secret_word_letter << " ";
		}
		else
		{
			std::cout << "_ ";
		}
	}

	std::cout << std::endl
						<< std::endl;
}
