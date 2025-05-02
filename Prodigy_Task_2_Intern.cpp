#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (userGuess != numberToGuess) {
        cout << "\nEnter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << numberToGuess << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
