#include <iostream>
#include <cstdlib>
#include <ctime>

void guessing_game() {

    std::srand(std::time(0));
    int random_number = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have generated a random number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;


    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > random_number) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < random_number) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            std::cout << "It took you " << attempts << " attempts to guess the number." << std::endl;
        }
    } while (guess != random_number);
}

int main() {
    guessing_game();
    return 0;
}
