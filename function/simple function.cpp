#include<iostream>
using namespace std;
class Cal
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		int subtract(int a, int b)
		{
			return a-b;
		}
		int divide(int a, int b)
		{
			return a/b;
		}
};
int main()
{
	Cal obj;
	cout<<"Sum="<<obj.add(6,4)<<endl;
	cout<<"Difference="<<obj.subtract(6,4)<<endl;
	cout<<"Quotient="<<obj.divide(6,4);
	return 0;
}

