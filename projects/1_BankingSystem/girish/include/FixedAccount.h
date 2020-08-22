#ifndef FIXEDACCOUNT_H
#define FIXEDACCOUNT_H

#include<iostream>
#include"BasicAccount.h"

using namespace std;

class FixedAccount : public BasicAccount
{
    private:
        int tenureInMonths;
        int roi;
        int renewalInMonths;

    public:
        FixedAccount();
        virtual ~FixedAccount();
};

#endif // FIXEDACCOUNT_H
