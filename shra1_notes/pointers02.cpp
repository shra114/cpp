//contents
	//strings & pointers
	

//strings and pointers
	{
		str1 = "abcd"; 
		there are five chars
		
		string - array of chars
		
		char char1 = str1[0]; 
		
		end char = \0 ; "a" "b" "c" "d" "\0"
		
		in c++ we have string datatype. 
		
		string str1 = "abcd";
		
		char str1[5] = "abcd";
		
		cout << *str1 <<endl;
		cout << *(str1+1) <<endl;
		
		char *p = str1; 
		
		char str1[]= "aakfdlafald";
		
		
		string to char; 
		
		string str1 = "this is a test"
		const char *text2 = str1.c_str();//c_str()
			//const is necessary
		cout << text2 << endl;
		
		char to string is straight forward. assign it. works
		str1 = text2. 
		
		char *a = "this is a var" ; //static can't change values. 
			// there is a const string in mem. returns the pointer to that in a 
		cout << a << endl;  
		
		a[0] = "a" -- this is illegal. 
		
		to make it implicit. we need to add const char *a = "this is var"
		
		char b[] = "this is b var"; // this reserves space for some chars. 
		b[0] = "b"; //this is fine. it works. 
		
		
		//dynamic array
		char * dyn_arr = new char[10]; 
		dyn_ar = "adfasdfa"; //changing these values afterwards doesn't work. 
		
		delete [] dyn_arr; //make sure you did not increment it to print and by the end your pointer reached. max
		
		
		
		//array fo strings
		string ar[5] ;
		ar[0] = "adfadf";
		ar[1] = "adfakldfadfa"; 
		
		
		
		}
	

