#ifndef ACCOUNTSTATEMENT_H
#define ACCOUNTSTATEMENT_H

using namespace std;

class AccountStatement
{
    private:
        typedef struct txn
        {
            int txnId;
            int amount;
            bool valid;
            struct txn * pNext;
            struct txn * pPrev;
        }txn_t;
        int balance;
        txn_t *pHead;
        txn_t *pCurr;

    public:
        AccountStatement();
        virtual ~AccountStatement();
        AccountStatement(const AccountStatement& other);

        void addTransaction(int);
        void printMinStatement();
};

#endif // ACCOUNTSTATEMENT_H
