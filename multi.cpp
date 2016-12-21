//multiple two base class:A, B and one sub-class
#include<iostream>
using namespace std;
class A
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
};
class B
{
	   	public:
		int add(int a, int b)
		{
			return a+b;
		}
	public:
		int mul(int a, int b)
		{
			return a*b;
		}
};
class C:public A, public B
{
   	
};
int main()
{
	C obj;
	cout<<obj.add(200,300); //ambigous
	cout<<endl;
	cout<<obj.mul(100,200);//20000
}
