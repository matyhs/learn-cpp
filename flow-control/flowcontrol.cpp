#include <iostream>

using std::cout;
using std::cin;

int main() {
    int first = 0;
    int second = 0;

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    cout << '\n';

    if (first > second) {
        cout << first << " is greater than " << second;
    } else if (first < second) {
        cout << first << " is less than " << second;
    } else {
        cout << first << " is equal to  " << second;
    }

    cout << '\n';
}