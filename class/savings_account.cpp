#include <iostream>
using std::cout;
using std::endl;

#include "savings_account.h"

SavingsAccount::SavingsAccount() : Account(), loyal(true) {
    if (loyal) {
        cout << "Constructing" << endl;
    }
}

SavingsAccount::~SavingsAccount() {
    cout << "Destructing" << endl;
}