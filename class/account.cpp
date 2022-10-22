#include "account.h"
#include "action.h"

using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0) {

}

vector<string> Account::Report() const {
    vector<string> report;
    report.push_back("Current balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for(auto t : logs) {
        report.push_back(t.Report());
    }
    report.push_back("------------");

    return report;
}

bool Account::Deposit(int amount) {
    if (amount <= 0) {
        return false;
    }
    balance += amount;
    logs.push_back(Transaction{amount, Action::deposit});

    return true;
}

bool Account::Withdraw(int amount) {
    if (amount <= 0) {
        return false;
    }
    if (amount > balance) {
        return false;
    }
    balance -= amount;
    logs.push_back(Transaction{amount, Action::withdraw});

    return true;
}