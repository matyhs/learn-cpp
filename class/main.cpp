#include <iostream>
using std::cout;
using std::endl;

#include "savings_account.h"

int main() {
    SavingsAccount a1;
    a1.Deposit(100);
    cout << "Account 1 balance is " << a1.GetBalance() << endl;

    a1.Withdraw(50);
    cout << "Account 1 balance is " << a1.GetBalance() << endl;

    for (auto log : a1.Report()) {
        cout << log << '\n';
    }
}