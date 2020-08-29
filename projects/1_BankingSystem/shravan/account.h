#include <iostream>

using namespace std;

class Account {
protected:
  	string name    ;
	int number;
	double balance;
	//int active
	//int type
	string statement ;
public:
	Account (string );
	Account (string , double);
	void deposit (double );
	void deposit (double, string );
	void withdraw (double );
	void transfer (double , int );
	void get_statement();
	void transfer (Account, double);
	~Account ();

};
