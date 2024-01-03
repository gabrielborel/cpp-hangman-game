#include "print_wrong_guesses.hpp"

void print_wrong_guesses(std::vector<char> wrong_guesses)
{
	std::cout << "Letters guessed: " << std::endl;
	for (char letter : wrong_guesses)
	{
		std::cout << letter << " ";
	}
	std::cout << std::endl
						<< std::endl;
}
