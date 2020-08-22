#include <iostream>
#include"BasicAccount.h"
#include"SavingsAccount.h"

using namespace std;

int main()
{
    BasicAccount a;
    a.setCustomerName("Isaac Newton");

    a.showCustomerInfo();

    SavingsAccount b;
    b.setCustomerName("Elon Musk");

    b.showCustomerInfo();

    cout << "Hello world!" << endl;
    return 0;
}
