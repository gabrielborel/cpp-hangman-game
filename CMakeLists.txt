cmake_minimum_required(VERSION 3.27)
project(hangman_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(hangman_cpp main.cpp
        main.cpp
        print_attempts_counter.cpp
        generate_random_word.cpp
        print_attempts_counter.cpp
        print_secret_word.cpp
        print_wrong_guesses.cpp
        check_letter_exists.cpp
        check_win_condition.cpp
        check_loss_condition.cpp
        capture_guess.cpp
        generate_random_word.cpp
)
