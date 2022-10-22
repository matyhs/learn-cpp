#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a = 3;
    int* a_ptr = &a;
    *a_ptr += 3;
    int b = 100;
    // assignment reference. In this code sample, the address of a_ptr is now pointing to b. 
    a_ptr = &b;
    cout << *a_ptr << endl;
    cout << a << endl;
    cout << b << endl;
}