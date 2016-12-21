//Single level inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    void add(int x, int y)
    {
        cout << "\nadd:"<<x+y;
    }
};

class B: public A
{
  public:
    void sub(int x, int y)
    {
        cout << "\nsub:"<<x-y;
    }
};

int main()
{
    B b;
    b.add(20,30);
    b.sub(20,5);
}
