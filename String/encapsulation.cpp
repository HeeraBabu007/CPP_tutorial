//Encapsulation:
//Wrapping of data and binding of code
#include<iostream> //header file
using namespace std;//dev c++ tag
/*class is a collections of data and 
memeber functions*/
class Student
{
	public:
    int id=101;	
};
//program execution starts from main function
int main()
{
	//object creation
	Student shrishti;
	cout<<shrishti.id;
	return 0;
}
