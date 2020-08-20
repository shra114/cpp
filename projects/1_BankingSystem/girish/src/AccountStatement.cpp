#include "AccountStatement.h"
#include<iostream>
using namespace std;

AccountStatement::AccountStatement()
{
    // Head points to the first txn and pCurr is used
    // to traverse through all transactions
    pHead = new txn_t;
    pHead->txnId = 0;
    pHead->amount = 0;
    pHead->valid = false;
    pHead->pNext = NULL;
    pCurr = pHead;
    balance = 0;
}

AccountStatement::~AccountStatement()
{
    // Destroy all the txn details using head
    // TODO
}

AccountStatement::AccountStatement(const AccountStatement& other)
{
    //copy ctor
}

void AccountStatement::addTransaction(int amount)
{
    static int s_txnId = 0x461000;
    // Add a transaction
    if(!pCurr->valid)
    {
        // Add details of current transaction
        pCurr->txnId = s_txnId++;
        pCurr->amount = amount;
        pCurr->valid = true;
        balance += amount;
        // Create space for next transaction and
        // make it invalid
        pCurr->pNext = new txn_t;
        pCurr = pCurr->pNext;
        pCurr->valid = false;
    }
    else
    {
        cout << "Error: Cannot overwrite current valid transaction !!" << endl;
    }
}

void AccountStatement::printMinStatement()
{
    // Print mini statement starting from Head
    txn_t *pTemp = pHead;
    int s_no = 1;
    cout << "======== Account Statement =========" << endl;
    do
    {
        if(!pTemp->valid)
            break;

        // Print txn details
        cout << " " << s_no++ << " Txn ID: " << pTemp->txnId << "  Amount: " << pTemp->amount << " Balance: " << balance << endl;

        // Point to the next transaction in the list
        pTemp = pTemp->pNext;
    }
    while(pTemp != NULL);
    cout << "=========== End =============" << endl;
}
