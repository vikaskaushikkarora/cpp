#include<iostream>
#include<string>
using namespace std ;


// Define a class first
class Geeks{

	// Choose the data variables you want to access directly outside the class 
	public:
	string geekname ;
	int ID ;
	
	// Define the variable functions 
	void printID() ;
	void printgfname() ;
	void changegfto(string name ) ;
	// Variable functions can be defined inside a class or the outside too 
	void printname(){
		cout << "Name of the Geek is : " << geekname << endl ;
	}

	// Declare a friend function ; it is not a part of class Geeks , but it can access all of class's data variables and functions maybe privare or public , although normal functions defined within the class can also do that , but they are defined inside the class 
	friend void ireallywantyourgfname(Geeks firstgeek) ;
	
	// Declare a Constructor
	Geeks(string name) ;
	// Define a Destrucor
	~Geeks(){
		cout << "-------------------------- " << endl ;
	}

	// Choose the data variables you don't want direct acess to ; although you can modify and show them via friend functions or variable functions defined within the class
	private:
	string gfname = "None" ;
};

//Variable functions being defined outside a class 
void Geeks :: printID(){
	cout << "The ID of the geek is : " << ID << endl ;
}
void Geeks :: printgfname(){
	cout << "I'm not gonna tell you my gf's name . You can leave my computer if you want ! " << endl ;
}
void Geeks :: changegfto(string name){
	gfname = name ;
	cout << "Wow . " << geekname << "'s got a new girlfriend ! " << endl ;
}

// Define a constructor
// A Constructor has the same name as that of class but doesn't have a data type or return value
Geeks :: Geeks(string name){
		cout << "--------------------------" << endl ;
		cout << "Object is being created ! " ;
		geekname = name ;
}

// Define friend function
void ireallywantyourgfname(Geeks firstgeek){
	cout << "Okey ! My gf is : " << firstgeek.gfname << endl ;
}


// Main function and all
int main(){
	// define an object inside the class Geek and associate the properties ( data variables) with it
	Geeks firstgeek("Vikas") ;
	// Or without defining a constructor , you would write :
	//firstgeek.geekname = "Vikas" ;
	firstgeek.ID = 1729 ;
	firstgeek.printname() ;
	firstgeek.printID() ;
	// you can not do this : firstgeek.gfname = .... because it is a private data variable
	firstgeek.printgfname() ;
	ireallywantyourgfname(firstgeek) ;
	firstgeek.changegfto("Anne Heathaway") ;
	ireallywantyourgfname(firstgeek) ;
}
