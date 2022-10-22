#include "transaction.h"
#include "action.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amount, Action action) :amount(amount), action(action){

}

string Transaction::Report() const {
    string report;
    report += "     ";
    switch (action)
    {
        case Action::deposit:
            report += "Deposit";
            break;
        case Action::withdraw:
            report += "Withdraw";
            break;
    }
    report += " ";
    report += to_string(amount);

    return report;
}