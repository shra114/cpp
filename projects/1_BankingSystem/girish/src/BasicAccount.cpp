#include "BasicAccount.h"

BasicAccount::BasicAccount()
{
    // Constructor
    cifNum = -1;
    accountNum = -1;
    accountType = "Not found";
    ifscCode = "Not found";
    customerName = "Not found";
    dob = {0, 0, 0};
    phone = 0;
}

BasicAccount::~BasicAccount()
{
    //dtor
}

// Set functions
void BasicAccount::setCustomerName(string customerName)
{
    this->customerName = customerName;
}

void BasicAccount::setCIFnumber()
{
    static int s_cifNum = 0x8001;
    this->cifNum = s_cifNum++;
}

void BasicAccount::setAccountNumber()
{
    static long int s_accountNum = 0x40803100;
    this->accountNum = s_accountNum++;
}

void BasicAccount::setAccountType(string accountType)
{
    this->accountType = accountType;
}

void BasicAccount::setIfscCode(string ifscCode)
{
    this->ifscCode = ifscCode;
}
void BasicAccount::setDob(int day, int month, int year)
{
    this->dob.day = day;
    this->dob.month = month;
    this->dob.year = year;
}

void BasicAccount::setPhoneNumber(unsigned long int phone)
{
    this->phone = phone;
}

// Get functions
string BasicAccount::getCustomerName()
{
    return this->customerName;
}

int BasicAccount::getCIFnumber()
{
    return this->cifNum;
}

long int BasicAccount::getAccountNumber()
{
    return this->accountNum;
}

string BasicAccount::getAccountType()
{
    return this->accountType;
}

string BasicAccount::getIfscCode()
{
    return this->ifscCode;
}

dob_t BasicAccount::getDob()
{
    return this->dob;
}

unsigned long int BasicAccount::getPhoneNumber()
{
    return this->phone;
}

void BasicAccount::showCustomerInfo()
{
    // Print customer info
    cout << "====== Customer Info =========" << endl;
    cout << " Customer Name  : " << getCustomerName() << endl;
    cout << " Account Number : " << getAccountNumber() << endl;
    cout << " Account Type   : " << getAccountType() << endl;
    cout << " CIF Number     : " << getCIFnumber() << endl;
    cout << " IFSC Code      : " << getIfscCode() << endl;
    dob_t temp = getDob();
    cout << " Date of Birth  : " << temp.day << "/" << temp.month << "/" << temp.year << endl;
    cout << " Phone number   : " << getPhoneNumber() << endl;
    cout << "===============================" << endl;
}

