#include <iostream>
#include "account.h"

using namespace std;

int main()
{

	Account a("Shra1",100);	
	Account b("Giri",100);	
	a.deposit(100);
	a.withdraw(20);
	b.transfer(a,30);
	a.get_statement();
	b.get_statement();
    return 0;
}
