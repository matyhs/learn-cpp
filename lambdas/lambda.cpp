#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
using std::sort;

#include <vector>
using std::vector;

#include <memory>
using std::unique_ptr;
using std::make_unique;

using std::begin;
using std::end;
using std::string;
using std::move;

int main() {
    vector<string> words{};
    words.push_back("Hello"); 
    words.push_back("Hi"); 
    words.push_back("Bonjour");
    words.push_back("Salut"); 

    sort(begin(words), end(words), [](auto const& a, auto const& b) {
        return a.length() < b.length();
    });

    for(auto const& word : words) {
        cout << word << endl;
    }

    // capture list lambda
    auto p = make_unique<int>(13);
    auto lamb = [ptr = move(p)]() {
        cout << *ptr << endl;
    };
    lamb();
}
