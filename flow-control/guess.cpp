#include <iostream>

using std::cout;
using std::cin;

int main() {
    int answer = 7;
    bool playing = true;

    while(playing) {
        int guess = 0;

        cout << "Guess the number: ";
        cin >> guess;

        if (answer == guess) {
            cout << "You got it! Answer is " << answer;
            playing = false;
        } else if (answer < guess) {
            cout << "Answer is less than your guess. Try again!";
        } else if (answer > guess) {
            cout << "Answer is greater than your guess. Try again!";
        }

        cout << "\n\n";
    }
}