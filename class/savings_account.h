#pragma once

#include "account.h"

class SavingsAccount : public Account {
    private:
        bool loyal;
    public:
        SavingsAccount();
        ~SavingsAccount();
};