#ifndef BASICACCOUNT_H
#define BASICACCOUNT_H

#include<iostream>

using namespace std;

typedef struct dob
{
    int day;
    int month;
    int year;
}dob_t;

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
        dob_t dob;
        // Customer phone number
        long int phone;

    public:
        BasicAccount();
        virtual ~BasicAccount();

        // Set functions
        void setCustomerName(string);
        void setCIFnumber();
        void setAccountNumber();
        void setAccountType(string);
        void setIfscCode(string);
        void setDob(int, int, int);
        void setPhoneNumber(long int);

        // Get functions
        string getCustomerName();
        int getCIFnumber();
        long int getAccountNumber();
        string getAccountType();
        string getIfscCode();
        dob_t getDob();
        long int getPhoneNumber();

        // Show Customer Info
        void showCustomerInfo();
};

#endif // BASICACCOUNT_H
