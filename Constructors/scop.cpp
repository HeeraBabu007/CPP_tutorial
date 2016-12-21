#include<iostream>
using namespace std;
class Calculator
{
	private:
		int num1, num2, num3;
	public:
		Calculator();
		void input();
		void sum();
		void disp();
};
Calculator::Calculator() 
{
	num1=num2=num3=0;
}
void Calculator::input()
{
	cout<<"Enter the first Number=";
	cin>>num1;
	cout<<"Enter the second number=";
	cin>>num2;
}
void Calculator::sum()
{
	num3= num1+num2;
}
void Calculator::disp()
{
	cout<<"The sum of two numbers="<<num3<<endl;
}

int  main()
{
	Calculator c;
	c.input();
	c.sum();
	c.disp();
	return 0;
}
