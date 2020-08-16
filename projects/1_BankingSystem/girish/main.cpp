#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    Account a("Isaac Newton", "398744441210");

    a.getAccountInfo();

    cout << "Account Number  : " << a.getAccountNumber() << endl;
    cout << "Account Balance : " << a.getAccountBalance() << endl;
    a.creditBalance(1000);
    cout << "Account Balance : " << a.getAccountBalance() << endl;
    a.creditBalance(500);
    cout << "Account Balance : " << a.getAccountBalance() << endl;
    a.creditBalance(-750);
    cout << "Account Balance : " << a.getAccountBalance() << endl;

    a.getAccountInfo();

    cout << "Hello world!" << endl;
    return 0;
}
