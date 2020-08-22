#ifndef OPENACCOUNT_H
#define OPENACCOUNT_H

#include <iostream>
#include "SavingsAccount.h"
#include "FixedAccount.h"

using namespace std;

class OpenAccount
{
    friend class SavingsAccount;
    friend class FixedAccount;

    private:
        string accntType;
        bool valid;
    public:
        SavingsAccount * savingsAccnt;
        FixedAccount * fixedAccnt;

        OpenAccount(string);
        virtual ~OpenAccount();
};

#endif // OPENACCOUNT_H
