//Upcasting without Virtual Destructor
#include<iostream>
using namespace std;
class Base
{
 	public:
 	~Base() 
 	{
 		cout << "Base Destructor\t"; 
 	}
};

class Derived:public Base
{
 	public:
 	~Derived() 
	 { 
	 	cout<< "Derived Destructor"; 
	 }
}; 

int main()
{
 Base* b = new Derived;     //Upcasting
 delete b;
}
