#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {
    string first;
    cout << "Enter first word/pharse: ";
    getline(cin, first);

    string second;
    cout << "Enter second word/phrase: ";
    getline(cin, second);

    if (first.length() == second.length()) {
        cout << "Length is equal";
    } else if (first.length() > second.length()) {
        cout << "First word/phrase is longer";
    } else if (first.length() < second.length()) {
        cout << "Second word/phrase is longer";
    }

    cout << '\n';
}