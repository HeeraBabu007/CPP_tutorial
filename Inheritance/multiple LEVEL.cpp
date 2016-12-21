#include<iostream>
#include<conio.h>
using namespace std;
class A
{   public:
	void show()
	{
		cout<<"/nA class";
	}
};
class B: public A
{ 
   public:
   void show1()
   {
   	cout<<"\nB class";
   }
};
class C: public A
{ 
public:
	void show3()
	{
		cout<<"\nC class";
	}
};
class D: public B
{
	public:
		void show2()
		{
			cout<<"\n D class";
		}
};

int main()
{
	D d;
	d.show2();
	d.show1();
	d.show3();
	d.show();
}
