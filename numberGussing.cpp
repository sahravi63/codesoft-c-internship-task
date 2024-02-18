//number gussing game
#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess == randomNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low. Try again!" << endl;
        } else {
            cout << "Too high. Try again!" << endl;
        }

    } while (userGuess != randomNumber);

    return 0;
}
