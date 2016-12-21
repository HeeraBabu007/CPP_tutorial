/*

What are Static data members ?
The data member of a class can be declared as static.
A static members variables certain special characteristics
(a) it is initialized to zero when the first object of its class is created.
(b) only one copy of that member is created for the entire class and is shared by all the objects, no matter how many objects are created
(c) it is visible only within the class but its lifetime is entire program.

Type and scope of each static member must be defined outside the class.
<data type> <class name> :: <variable name>

*/

#include<iostream> 
#include<conio.h> 
using namespace std;
class item 
{ 
         static int count; 
         int number; 
         public: 
         void getdata(int a) 
        { 
                  number=a; 
                 count++; 
         } 
         void putdata() 
        { 
                 cout<<count<<"\n"; 
         } 
 }; 
int item::count;
int main() 
{ 
        item x1,y1; 
       
        x1.putdata(); 
        y1.putdata(); 
        
        x1.getdata(100); 
        y1.getdata(200); 
        
		x1.putdata(); 
        y1.putdata(); 
}
