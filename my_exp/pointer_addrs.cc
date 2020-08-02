#include <iostream>
using namespace std;
int main ()
{
  int a = 0x102040;
  int *p = &a;
  cout << hex << *p << endl;//102040 
  // can we refer to lower 2 bytes?


  return 0;
}
