#include<iostream>
using namespace std;
class A
{
	public:
		int add(int x, int y)
		{
			return x+y;
		}
};

class B:public A
{
	public:
		int add(int x, int y)
		{
			return x+y+10;
		}
};

int main()
{
	B o;
	cout<<o.add(10,20)<<endl;
	return 0;
}

