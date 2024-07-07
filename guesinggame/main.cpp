#include <iostream>
#include <cstdlib> // Include this header for srand() and rand()
#include <ctime>   // Include this header for time()
using namespace std;

int main() {
    int number, guessnum;
    int upper = 50;
    int lower = -100;
    int numberofattempts = 0;
    srand(time(0));
    number = (rand() % (upper - lower + 1)) + lower;
    cout << "       Guess A Random Number Let's Play to Check " << endl << endl;
    
    do {
        cout << "Guess a random number: ";
        while (!(cin >> guessnum)) {
            cin.clear(); // clear the error state
            cin.ignore(1000, '\n'); // ignore invalid input
            cout << "Invalid input. Please enter an integer: ";
        }
        numberofattempts++;
        if (guessnum > number) {
            cout << "Too high, guess again." << endl;
        } else if (guessnum < number) {
            cout << "Too low, guess again." << endl;
        } else {
            cout << "Congratulations! Correct guess." << endl;
            cout << "You guessed it in " << numberofattempts << " attempts." << endl;
        }
    } while (guessnum != number);

    return 0;
}
