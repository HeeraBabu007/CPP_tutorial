#include<iostream>
using namespace std;
class Calculator
{
	private:
		int num1, num2, num3, total;
	public:
		Calculator(int, int);
		void sum();
};
Calculator::Calculator(int x, int y)
{
	num1=x;
	num2=y;
	total=0;
}
void Calculator:: sum()
{
    total=num1+num2;
	cout<<"Sum is "<<total<<endl;	
}

int main()
{
	int a, b;
	cout<<"Enter a="<<endl;
	cin>>a;
	cout<<"Enter b="<<endl;
	cin>>b;
	Calculator C1(a,b);
	C1.sum();
	return 0;
}
