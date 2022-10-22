#include <iostream>
using std::cout;
using std::endl;

int main() {
    int i = 3;
    int const j = 4;

    int const &rI = i;
    cout << rI << endl;

    i += 4;
    cout << rI << endl;

    int const &rJ = j;
    cout << rJ << endl;

    // unchangeable pointer
    int *const a = &i;
    cout << *a << endl;
    // but value can still be changed
    *a -= 4;
    cout << *a << endl;

    // unchangeable value
    int const *b = &j;
    cout << *b << endl;
    // but pointer can be changed
    b = &i;
    cout << *b << endl;

    // unchangeable value & pointer
    int const *const c = &j;
    cout << *c << endl;
}