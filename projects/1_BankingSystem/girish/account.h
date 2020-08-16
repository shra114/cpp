#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<iostream>

using namespace std;

class Account
{
private:
    string name;
    string accountNumber;
    int balance;
    string accountType;
public:
    Account();
    Account(string name ="", string accountNumber ="0000", int balance =0, string accountType ="Savings");
    ~Account();
    void getAccountInfo();
    string getAccountNumber() const { return accountNumber; }
    int getAccountBalance() { return balance; }
    void creditBalance(int bal);
};

#endif // ACCOUNT_H_INCLUDED
