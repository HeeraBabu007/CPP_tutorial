/*
What are Static member functions ?
Like static member variables, we can also have static member functions. 
It has the following properties:
A static function can have access to only other static members declared in same class.
A static member function can be called using the class name as follows

Class name :: function name

*/

#include<iostream>
using namespace std; 
class test 
{ 
        int a; 
        static int b; 
        public: 
        void setdata() 
       	{ 
                a=b++; 
        } 
       
	   static void showdata() 
       { 
	      cout<< b;
	   } 
 }; 
int main() 
{ 
       test x1,x2; 
       
       x1.setdata(); 
       x2.setdata(); 
       
       test::showdata(); 
}
