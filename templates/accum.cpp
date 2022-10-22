#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "accum.h"

int main() {
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> words("");
    words += "hello ";
    words += "world";
    cout << words.GetTotal() << endl;
}