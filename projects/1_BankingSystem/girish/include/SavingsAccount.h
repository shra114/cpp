#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include<iostream>
#include "BasicAccount.h"

class SavingsAccount : public BasicAccount
{
    private:
        int roiPercentage;
        int maxTxnLimit;

    public:
        SavingsAccount();
        virtual ~SavingsAccount();
};

#endif // SAVINGSACCOUNT_H
