#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void print_word(string secret_word);
bool check_letter_exists_on_secret_word(char letter, string secret_word);
bool check_win_condition(string secret_word);
bool check_loss_condition(string secret_word);
void print_wrong_guesses();
void print_attempts_counter();
string generate_random_word();

const int ATTEMPTS_LIMIT = 6;
map<char, bool> secret_word_guessed_letters;
vector<char> wrong_guesses;

int main()
{
	cout << "Welcome to the Hangman Game!" << endl
			 << endl;

	const string secret_word = generate_random_word();

	while (!check_loss_condition(secret_word) && !check_win_condition(secret_word))
	{
		print_attempts_counter();
		print_word(secret_word);
		print_wrong_guesses();

		cout << "Type a letter: ";
		char letter;
		cin >> letter;
		cout << endl;

		if (check_letter_exists_on_secret_word(letter, secret_word))
			secret_word_guessed_letters[letter] = true;
		else
			wrong_guesses.push_back(letter);
	}
}

void print_word(string secret_word)
{
	cout << endl
			 << endl;

	for (char secret_word_letter : secret_word)
	{
		if (secret_word_guessed_letters[secret_word_letter])
		{
			cout << secret_word_letter << " ";
		}
		else
		{
			cout << "_ ";
		}
	}

	cout << endl
			 << endl;
}

void print_wrong_guesses()
{
	cout << "Letters guessed: " << endl;
	for (char letter : wrong_guesses)
	{
		cout << letter << " ";
	}
	cout << endl
			 << endl;
}

bool check_letter_exists_on_secret_word(char guessed_letter, string secret_word)
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

void print_attempts_counter()
{
	cout << "Attempts: " << wrong_guesses.size() + 1 << " of " << ATTEMPTS_LIMIT << endl;
}

bool check_win_condition(string secret_word)
{
	bool all_letters_correct = true;
	for (char letter : secret_word)
	{
		if (!secret_word_guessed_letters[letter])
			all_letters_correct = false;
	}

	if (all_letters_correct)
		cout << "You won the game! The secret word were " << secret_word << endl;

	return all_letters_correct;
}

bool check_loss_condition(string secret_word)
{
	if (wrong_guesses.size() + 1 > ATTEMPTS_LIMIT)
	{
		cout << "You lost the game! The secret word were " << secret_word << endl;
		return true;
	}
	return false;
}

string generate_random_word()
{
	ifstream file;
	file.open("words.txt");

	if (!file.is_open())
	{
		cout << "error when reading file on random words" << endl;
		exit(1);
	}

	vector<string> words;
	int words_quantity;
	file >> words_quantity;

	for (int i = 0; i < words_quantity; i++)
	{
		string word;
		file >> word;
		words.push_back(word);
	}

	file.close();

	srand(time(NULL));
	int random_index = rand() % words.size();

	return words[random_index];
}
