//structures
struct personalData {
  string name; 
  string phonenum; 
  short age; 
}
int main (){
   personalData person; 
   person.name = "kjfdad ";
   person.age = 20; 

}

//print
cout << person.name << endl;

//array
personalData person[10]; 
person[1].age = 22; 

//pointer
cout << ((*person+1).name << endl; 

// -> 
cout <<< (person+1)->name << endl; 

//pointer 
personalData *p = &person[0]; 
cout << p-> name << endl; 

//passing by values/address is same as previous like strings/arrays. 

//Classes
    //additional features than structures
    //assignment of private varialble outside will not work.
    //but all variables should be in private to avoid mistaken modification.
    //use functions in public
#include "people.h"
#include <iostream>

In poeple.h declear the functions. In people.cpp define the func like
PersonalData::setAge(int age)
{
 this ->age = age ;
}
this give the address to the class obj. 

//constructors
fuction with the class name
public:
    className();

 className::className(){
 cout<< "this is constructor!"<< endl; 

 static variables initialized only once in constructor. 
 }
use: initialize something

//destructor -- 
destruct the object. 
~className
className::~className(){
}
for dynamic variables, delete them in destructors.

//to have more features for constructors - use function overloading. 

//////static variables and functions
Ex. different id values for each object. 
static int counter; 
intialize in .h file
in constructor counter ++  ; id = counter
static methods can be accessed without the object. 
ex: User::getCounter() << endl;

/////////////const objects methods
if const used then every thing becoms constant. 
for getpositin will work if void getposition() const;

///////////friend function
to change the private var -- don't work by use of other function. 
'

put the function definition in public as friend 
Ques: what is the use?
	is it becaue others can use a function

////////////friend classes
class B; -- this way we can just declar a class at the top so that everything below need not be organized. just like assignmeents in verilog

class B{
	friend class A; //this can read and write private vars
	
	int val;
	public:
		int get
	}
////////copy constructor
if an object is copied using other object
    all the variables are independent to each object 
    but if ther e is a dynamicall y allocated memory it just comes same in all objects. 
    meaning it is the same allocated memory used by all the objects
  use copy constructor to chagne the value only for object 2
  /*TODO*/ did not understand it that 
  much 
//////////
Overloading

////////// inheritence
class B: public A  // B inherits the public things class A
A -- base class or parent class or super class
B -- derived class or child or subclass

protect members can be accessed by derived class similar to public, but for others it is protected


doubt:  at 15:01 in inheretence using Point(x) in the constructor of Point2D. TODO

private : no access to child classes
protect : access and it will be protected for child class

protected classA
	private : no access
	protected : protected
	public     : protected

private class A
	private :  no access
	protected : private
	public    : private
	
If there are same functions in child and parent. Then 	child gets the priority
if you want to use parent's function - obj.parent::func()'


/////////////////polymoriphism///////////////////////
Animal class ; change the voice in constructors and change the method 
virtual keyword : add to the function in the parent to avoid messing up when the child has the same name function when pointers are used.
	ex. Animal *p = &dog; //legal since dog is derivede from Animal. 
	
abstract class : just has the simple definitions of functions like virtual int calc(int) = 0; 
virtual destructor : 
	in the base class
	 virtual ~baseClass(); // this way we can destruct subclass dynamic allocation
		ex: baseClass *b = new subClass; //if no virutal only base is destoyed not sub
		 
////////////////////////TODOs/////////////////////////////////////////////
///>>>>>>>>1
class A: public B
		this->B(x); //check this if this can be used in constructor  in class A;  TODO
		
		A objA; 
		
		objA.B::fun();
////////////////////////////////////////////////////////////////////////////
