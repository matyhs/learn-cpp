#include <iostream>
using std::cout;
using std::endl;

#include "person.h"

int main() {
    Person p1("Sample", "User", 19);
    Person p2("Another", "User", 10);
    int restricted_age = 18;

    if (p1 < p2) {
        cout << p1.GetName() << " is younger than " << p2.GetName() << endl;
    } else {
        cout << p1.GetName() << " is older than " << p2.GetName() << endl;
    }

    if (restricted_age < p1) {
        cout << p1.GetName() << " is allowed to watch this movie" << endl;
    }

    if (restricted_age < p2) {
        cout << p2.GetName() << " is allowed to watch this movie" << endl;
    }
}