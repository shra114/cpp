#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include<iostream>
#include "BasicAccount.h"

class SavingsAccount : public BasicAccount
{
    public:
        SavingsAccount(string);
        virtual ~SavingsAccount();

    protected:

    private:
};

#endif // SAVINGSACCOUNT_H
