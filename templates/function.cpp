#include <iostream>
using std::cout;
using std::endl;

template <class T>
T max(T const& from, T const& to) {
    return from < to? to: from;
}

int main() {
    auto x = max<double>(33.3, 2.0);
    cout << x << endl;

    auto y = max(3, 5);
    cout << y << endl;
}