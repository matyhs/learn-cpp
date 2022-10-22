#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <chrono>

int main() {
    using namespace std::string_literals;
    auto word = "10"s;

    using namespace std::chrono_literals;
    auto s = 10s;
    auto h = 10h;
    auto m = 10min;
    auto ms = 10ms;
}