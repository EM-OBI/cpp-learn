#include <iostream>
#include <cmath>

using namespace std; 



int main() {
    srand(time(0));
    int upper = 11;
    int number = rand() % upper;
    
    int guess;

    int guessCount = 0;
    
    while (guess != number) {
        cout << "Guess a number between 0 and " << upper - 1 << endl;
        cin >> guess;
        guessCount++;
        if (guess > number) {
            cout << "Too high, try again!" << endl;
        } else {
            cout << "Too low, try again!" << endl;
        }
    }
    
    cout << "Congrats! you guessed " << guess << " after " << guessCount << " guesses!" << endl;

    return 0;
}

