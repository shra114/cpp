#include <iostream>
#include "account.h"

Account::Account (string str1 ){	
	this->name = str1;
	this->balance = 0.0;
	this->statement = "Account name "+this->name+"\nOpened account with balance 0.0\n";
	cout << this->statement  << endl;
}

Account::Account (string str1, double bal ){	
	this->name = str1;
	this->balance = bal;
	this->statement = "Account name "+this->name+"\nOpened account with balance "+to_string(bal)+"\n";
	cout << this->statement  << endl;

}
void Account::get_statement (){	
	cout <<"====STATEMENT===="<< endl;
	cout << this->name << endl;
	cout << this->statement  << endl;
}
void Account::deposit (double cash){
	this->balance += cash;	
	string mystr = "\nAdded cash "+to_string(cash);
	this->statement += mystr;
	this->statement += "\nBalance ="+to_string(this->balance);

}
void Account::deposit (double cash, string fromaccount){
	this->balance += cash;	
	string mystr = "\nAdded cash "+to_string(cash)+"from "+fromaccount;
	this->statement += mystr;
	this->statement += "\nBalance ="+to_string(this->balance);

}

void Account::withdraw(double cash){
	if(cash > this->balance)
	{
		cout << "ERROR: insufficient cash to withdraw" << endl;
		return;
	}
	this->balance -= cash;	
	string mystr = "\nWithdrawn cash "+to_string(cash);
	this->statement += mystr;
	this->statement += "\nBalance ="+to_string(this->balance);

}
void Account::transfer(Account & tmp, double cash){
	if(cash > this->balance)
	{
		cout << "ERROR: insufficient cash to transfer " << endl;
		
		return;
	}
	tmp.deposit(cash, this->name);
	this->balance -= cash;	
	string mystr = "\nTransferred cash "+to_string(cash)+"to "+tmp.name;
	this->statement += mystr;
	this->statement += "\nBalance ="+to_string(this->balance);


}
Account::~Account (){	
	cout <<"destruct account " << this->name <<endl;
}
