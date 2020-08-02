#include <iostream> 

int main()
{
	//address of the variable. 
	//&a
	//integer ; int *p 
	// int * -- > inform it is a pointer. 
	//p = &a
	////*&a
	//*p -> value at this addr. 
	//*p = value2 is also fine
	// p = &var2 is also fine. 
	//	if you don't want above thing. use int * const p  = &a ; 	 
	//	but value of the addr can be change. 
	// const int *p ;// this is a pointer to address where the value is constant. 
	// const int *const p; // can't change the value and address pointing to. 
	
	//pointer to pointer variable is possible. 
	
		// int val; 
		// int *p = &val; //p has the address 
		// &p will give its address and can be stored in the pointer
		// int ** p[  &p
	
	
	int * const p ; 
	p = &a;
	p = &b; -- this won't work 
	
	
	//local 
	{
		int x =10;
		}
	x++ ; //undeclared variable. 
		
	
	
	////////////////////////////////////////////////////
	//Name of the array is a pointer. 
	//int val[3]; 
	// val and &val[0] is same. 
	//It is also a cont pointer. you can't assign to address of other valriable 
	// int array -- addess moves by four bytes. double - 8 bytes. 
	//  val 	-- addr
	//  val+1 	-- addr +4  for int 
	//we have *p2 = &a[0];
	// p2 can be added subracted etc. 
	//  ++*p2 - value ince; *++p2; pointer increased and line executed. 
	//*p2++ - line executed and then pointer increased. 
	//////////////////////////////////////////////////////
	
	
	////////////////////////////////////////////////
	//dynamic allocation of memory
	int a[100]; reserved for this program
	//but we cant increase it later during run time. 
	
	cin >> width; 
	int array[width]; 
	//This is not proper, what if it is used by other program. 
	// then this program crashes. 
	
	
	new -- > I need this free space after compile during run time. 
	cout << new int << endl; // dynamically allocated. changes for every run 
	
	int *p = new int; 
	*p = 50; 
	cout << *p << endl;
	delete p ; free up the space. //this space can be used by other programs. 
	cout << *p << endl; //now this is random value. 
	
	//better make it null after delete p = NULL; // this way 
	
	dynamic allocation to be done using new; 
	cin >> width; 
	int *p = new int[width]; 
	
	//try giving width as 102102109201920190291021 -- it crashes
		//use nothrow for not crash and use if (p !=NULL)
	////////////////////////////////////////////////
	
	
	
	}
