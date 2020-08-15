#include<iostream>
using namespace std;

main()
{
    struct st
    {
        int b;
        int c;
        char d;
    };

    struct st var;
    struct st * p = &var;
    char * q = (char*)&var;
    char temp = 's';
    char *pTemp = &temp;

    // Printing typecasted values and incremented addresses
    // as in C style. This worked as expected
    printf(" &var = 0x%x\n", &var);
    printf(" p    = 0x%x\n", p);
    printf(" q    = 0x%x\n", q);
    printf(" p+1  = 0x%x\n", p+1);
    printf(" q+1  = 0x%x\n", q+1);

    // Printing the type casted char addresses q using cout
    // Printed char and char* using cout, which gave same value
    // in both the cases
    cout << " q using cout                 : " << q << endl;
    cout << " q+1 using cout               : " << q + 1 << endl;
    cout << " pTemp (of char*) using cout  : " << pTemp << endl;
    cout << " *pTemp (of char) using cout  : " << *pTemp << endl;

    // Printing notes to the console
    cout << endl << " ====== N O T E S ======== " << endl;
    cout << "When cout is used char* typecasting didn't work" << endl;
    cout << "When printf is used same char* typecasting worked" << endl;
    cout << "In case of char and char*, cout always printed value at the address" << endl;

}

