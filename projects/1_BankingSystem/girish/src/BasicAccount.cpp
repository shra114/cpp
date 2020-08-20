#include "BasicAccount.h"

BasicAccount::BasicAccount(string customerName, string ifscCode, long int dob, long int phone, string accountType)
{
    static int s_cifNum = 0x8001;
    static long int s_accountNum = 0x40803100;

    // assign cifNum and accountNum automatically
    cifNum = s_cifNum++;
    accountNum = s_accountNum++;

    this->ifscCode = ifscCode;
    this->accountType = accountType;
    this->customerName = customerName;
    this->dob = dob;
    this->phone = phone;
}

BasicAccount::~BasicAccount()
{
    //dtor
}

void BasicAccount::showCustomerInfo()
{
    // Print customer info
    cout << "====== Customer Info =========" << endl;
    cout << " Customer Name  : " << customerName << endl;
    cout << " Account Number : " << accountNum << endl;
    cout << " Account Type   : " << accountType << endl;
    cout << " CIF Number     : " << cifNum << endl;
    cout << " IFSC Code      : " << ifscCode << endl;
    cout << " Date of Birth  : " << dob << endl;
    cout << " Phone number   : " << phone << endl;
    cout << "===============================" << endl;
}

