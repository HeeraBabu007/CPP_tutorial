//inheritance using functions
#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
class info
{
	public:
		int sub(int x, int y);
};
class Student:public info
{
	public:
		int id;
		int add(int x, int y);
		
};
int Student::add(int x, int y)
{
	cout<<x+y;
};

int Student::sub(int a, int b)
{
	cout<<a-b;
};

int main()
{
	Student s;
    s.id=101;
    cout<<s.id<<endl;
	s.add(10,20);
	s.sub(100,20);
}
