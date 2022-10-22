#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a = 3;
    int& rA = a;
    rA += 3;
    int b = 100;
    // cannot reassign reference. In this code sample, the value of b will be assigned to the value of a, which rA is referencing to originally.
    rA = b;
    cout << rA << endl;
    cout << a << endl;
    cout << b << endl;
}