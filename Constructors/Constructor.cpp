#include<iostream>
using namespace std;
class Calculator
{
	private:
		int number1, number2, number3, total;
		
	public:
		void initialization()
		{
			number1=10;
			number2=20;
		}
		void add()
		{
			total = number1+number2;
		}
		void display()
		{
			cout<<"The total="<<total<<endl;
		}
};
int main()
{
	Calculator c;
	c.initialization();
	c.add();
	c.display();
	return 0;
}
