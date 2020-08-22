#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : BasicAccount()
{
    // Constructor
    roiPercentage = 3;
    maxTxnLimit = 10000;
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}
