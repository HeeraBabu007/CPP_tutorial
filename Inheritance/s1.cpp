#include<iostream>
using namespace std;
class Student
{
	public:
     int rollno;
     string name;
};

class NIITStudent:public Student
{
	public:
		string address;
	
};

int main()
{
    NIITStudent s;
    s.rollno=101;
    s.name="heera";
    s.address="delhi";
    cout<<s.rollno<<"name= "<<s.name<<"address="<<s.address;
	return 0;
}


