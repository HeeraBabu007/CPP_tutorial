#include<iostream>
using namespace std;
class A
{
	public:
		int add(int x, int y)
		{
			return x+y;
		}
		
		int add(int x, int y, int z)
		{
			return x+y+z;
		}
};

int main()
{
	A a;
	cout<<a.add(10,20);
	cout<<endl;
	cout<<a.add(10,20,30);
	return 0;
}

