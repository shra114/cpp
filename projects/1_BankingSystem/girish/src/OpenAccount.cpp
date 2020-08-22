#include "OpenAccount.h"

OpenAccount::OpenAccount(string accntType)
{
    // Constructor
    savingsAccnt = NULL;
    fixedAccnt = NULL;

    if(accntType == "Savings")
    {
        accntType = "Savings";
        savingsAccnt = new SavingsAccount;
        savingsAccnt->setAccountType(accntType);
    }
    else if(accntType == "Fixed")
    {
        accntType = "Fixed";
        fixedAccnt = new FixedAccount;
        fixedAccnt->setAccountType(accntType);
    }
}

OpenAccount::~OpenAccount()
{
    //dtor
}
