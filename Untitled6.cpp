#include<iostream>
using namespace std;
class A
{
	public:
		A();
		int add(int, int);

};
int A::add(int x, int y)
{
	return x+y;
}
int main()
{
	A a;
	cout<<a.add(10,20);
}
