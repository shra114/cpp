#include <iostream>
#include"BasicAccount.h"
#include"SavingsAccount.h"
#include"OpenAccount.h"
#include"FixedAccount.h"

using namespace std;

int main()
{
    /*
    BasicAccount a;
    a.setCustomerName("Isaac Newton");
    a.showCustomerInfo();

    SavingsAccount b;
    b.setCustomerName("Elon Musk");
    b.showCustomerInfo();

    FixedAccount d;
    d.setCustomerName("Android App");
    d.showCustomerInfo();
    */

    OpenAccount c("Savings");
    c.savingsAccnt->setCustomerName("Elon Musk");
    c.savingsAccnt->setCIFnumber();
    c.savingsAccnt->setIfscCode("BANK50001");
    c.savingsAccnt->setAccountNumber();
    c.savingsAccnt->setDob(18, 5, 1991);
    c.savingsAccnt->setPhoneNumber(630064);
    c.savingsAccnt->showCustomerInfo();

    cout << "Hello world!" << endl;
    return 0;
}
