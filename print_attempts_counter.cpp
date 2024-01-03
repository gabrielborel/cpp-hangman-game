#include "print_attempts_counter.hpp"

void print_attempts_counter(std::vector<char> wrong_guesses, int ATTEMPTS_LIMIT)
{
	std::cout << "Attempts: " << wrong_guesses.size() + 1 << " of " << ATTEMPTS_LIMIT << std::endl;
}
