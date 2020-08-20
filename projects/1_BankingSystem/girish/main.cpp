#include <iostream>
#include"AccountStatement.h"
#include"BasicAccount.h"
#include"SavingsAccount.h"

using namespace std;

int main()
{
    /*
    AccountStatement a;

    a.printMinStatement();
    a.addTransaction(1000);
    a.addTransaction(500);
    a.addTransaction(800);
    a.addTransaction(2000);
    a.addTransaction(1500);
    a.printMinStatement();
    */

    BasicAccount a("Isaac Newton");

    a.showCustomerInfo();

    SavingsAccount b("Elon Musk");

    b.showCustomerInfo();

    cout << "Hello world!" << endl;
    return 0;
}
