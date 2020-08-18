//pointers03: functions and pointers
//summary: 
	1. 

how to change the value of variable in one function by other. 
	send the address of the variable  

//code below
	b=10
	changevar(b)
	cout << b; 
	
	changevar( int &a){
		a ++; 
	}

//using pointers -- send address this time
	b=10
	changevar(&b)
	cout << b; 
	
	changevar ( int *a){
		*a ++; 
		}

//return - value 
int changevar ( int *a){
		*a ++; 
		return *a; 
		}


//return - pointer address. 
int * changevar ( int *a){
		*a ++; 
		return a;  // no *
		}
/////////////////////////////////////////////////

//array
	int a[10] ; 
	for i: 0 to 10 ; a[i] = i
multiply each element by some variable. 

 void mulArray(int *a, int mulvar)
 {
	 for i:0 to 10; a[i] *= mulvar
	 }

mulArray(a,5)

//return array
int * mulArray(int *a, int mulvar)
 {
	 for i:0 to 10; a[i] *= mulvar
	 
	 return a; 
	 }

//////////////////////
//sizeof
sizeof(int) -- 4
int a[10]
sizeof(a) -- 40
len - sizeof(a)/sizeof(a[0])

if a is sent to other function sizeof(a) will not give 40 it gives 4. hence len of arrary should be sent

int * mulArray(int *a, int mulvar, int lenArrary)
 {
	 for i:0 to lenArray ; a[i] *= mulvar
	 
	 return a; 
	 }
//////////////
psuedo random vs random
		follow a rule to genrate the random number
		srand(400); //400 is seed
	send time as seed 
		srand(time(NULL));
////////////////////////
type casting
double a = 5.5;
cout << (int) a ; 
b = (double) a/b;
c++ version - static_cast<double> a;
////////////////////////
		
