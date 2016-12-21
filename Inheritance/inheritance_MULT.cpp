//single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    void show()
    {
        cout << "Base class\n";
    }
};
class B: public A
{
public:
    void show()
    {
        cout << "Base class\n";
    }
};

int main()
{
    B b;
	b.show(); 
}
