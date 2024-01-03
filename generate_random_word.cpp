#include <vector>
#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include "generate_random_word.hpp"

std::string generate_random_word()
{
	std::ifstream file;
	file.open("/home/gabrielborel/www/ccpp/hangman-cpp/words.txt");

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

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(0, words.size() - 1);
	int random_index = distribution(gen);

	return words[random_index];
}
