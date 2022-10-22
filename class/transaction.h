#pragma once

#include <string>

#include "action.h"

class Transaction {
    private:
        int amount;
        Action action;
    public:
        Transaction(int amount, Action action);
        std::string Report() const;
};