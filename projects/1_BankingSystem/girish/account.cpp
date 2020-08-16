#include<iostream>
#include"account.h"

Account::Account()
{
    name = "";
    accountNumber = "0000";
    balance = 0;
    accountType = "NA";
}

Account::~Account()
{
    // Empty
}

Account::Account(string name, string accountNumber, int balance, string accountType)
{
    this->name = name;
    this->accountNumber = accountNumber;
    this->balance = balance;
    this->accountType = accountType;
}

void Account::getAccountInfo()
{
    cout << " ********* Account Info *********** " << endl;
    cout << " Name            : " << name << endl;
    cout << " Account type    : " << accountType << endl;
    cout << " Account Number  : " << accountNumber << endl;
    cout << " Balance         : " << balance << endl;
    cout << " ********* E N D *********** " << endl;
}

void Account::creditBalance(int bal)
{
    this->balance += bal;
}
