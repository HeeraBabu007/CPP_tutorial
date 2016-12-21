#include<iostream>
using namespace std;
class A
{
	public:
		int i, j;
		A()
		{
			i=20;
			j=30;
		}
};
int main()
{
	A a;
	cout<<a.i<<endl;
	cout<<a.j;
}
