#include <vector>
#include <iostream>
#include <fstream>
#include "generate_random_word.hpp"

std::string generate_random_word()
{
	std::ifstream file;
	file.open("words.txt");

	if (!file.is_open())
	{
		std::cout << "error when reading file on random words" << std::endl;
		exit(1);
	}

	std::vector<std::string> words;
	int words_quantity;
	file >> words_quantity;

	for (int i = 0; i < words_quantity; i++)
	{
		std::string word;
		file >> word;
		words.push_back(word);
	}

	file.close();

	srand(time(NULL));
	int random_index = rand() % words.size();

	return words[random_index];
}
