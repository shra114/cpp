#ifndef BASICACCOUNT_H
#define BASICACCOUNT_H

#include<iostream>

using namespace std;

class BasicAccount
{
    private:
        // CIF number will be assigned automatically
        int cifNum;
        // Account number will be assigned automatically
        long int accountNum;
        // Account type - Savings/Fixed/Current
        string accountType;
        // IFSC code
        string ifscCode;
        // Account holder name
        string customerName;
        // Date of Birth of customer
        long int dob;
        // Customer phone number
        long int phone;

    public:
        BasicAccount(string customerName, string ifscCode="BNK20001", long int dob=0, long int phone=0, string accountType="Savings");
        virtual ~BasicAccount();
        void showCustomerInfo();
};

#endif // BASICACCOUNT_H
