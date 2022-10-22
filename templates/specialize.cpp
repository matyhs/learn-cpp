#include <iostream>
using std::cout;
using std::endl;

#include "person.h"

using std::string;

#include "accum.h"

int main() {
    Person p("Sample", "User", 10);
    Person p1("Another", "User", 9);

    Accum<Person> people(0);
    people += p;
    people += p1;

    cout << people.GetTotal() << endl;
}