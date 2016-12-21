#include<iostream>
using namespace std;
class A
{
	public:
	int add(int  x, int y)
	{
		return x+y;
	}
};

class B:public A
{
	public:
	int add(int  x, int y)
	{
		return x+y+200;
	}
};

int main()
{
	B b;
	cout<<b.add(100, 200);	
}

