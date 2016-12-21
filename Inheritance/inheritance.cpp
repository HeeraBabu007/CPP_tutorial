//single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
//parent class or super class
class A
{
    protected:
    void show()
    {
        cout << "Base class"<<endl;
    }
};

//child class B inherits properties of super class A
class B : public A
{
public:
    void show2()
    {
        cout << "Derived class"<<endl;
    }
};

int main()
{
    A a;
    B b;
//	a.show();
	b.show();
	b.show2();
}
