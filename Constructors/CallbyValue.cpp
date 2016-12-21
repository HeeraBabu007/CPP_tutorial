#include<iostream>
using namespace std;
void swap(int , int );
class functionCall
{
	int number1, number2;
	public:
		void accept();
};
void functionCall::accept()
{
	cout<<"Input two numbers"<<endl;
	cin>>number1;
	cin>>number2;
	swap(number1, number2);
	cout<<number1<<" "<<number2<<endl;
}
void swap(int num1, int num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<num1<<" "<<num2<<endl;
}

int main()
{
	functionCall f1;
	f1.accept();
	return 0;
}
