#include<iostream>
using namespace std;
class sum
{
	private: int a,b,c,d;
	public:
		void add()
		{
			cout<<"Enter any two numbers:";
			cin>>a>>b>>c;
			d=a+b+c;
			cout<<"Sum is:"<<d;
		}
};
int main()
{
sum s;
s.add();
return 0;
}
