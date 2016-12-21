//multi-level inheritance
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

class C: public B
{
  public:
    void mul(int x, int y)
    {
        cout << "\nmul:"<<x*y;
    }
};

int main()
{
    C c;
    c.add(20,30);
    c.sub(20,5);
    c.mul(10,10);
}
