#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {
    string name;
    cout << "Who are you? ";
    cin >> name;

    string greeting = "Hi " + name;
    greeting += ". Nice to meet you!";
    cout << greeting << '\n';

    cout << "Greeting Length: " << greeting.length() << '\n';
}