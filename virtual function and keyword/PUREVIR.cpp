#include<iostream>
using namespace std;
class Base          //Abstract base class
{
 public:
 virtual void show() = 0;            //Pure Virtual Function
};

void Base :: show()         //Pure Virtual definition
{
 cout << "Pure Virtual definition\n";
}

class Derived:public Base
{
 public:
 void show()
 { cout << "Implementation of Virtual Function in Derived class"; }
};

int main()
{
 Base *b;
 Derived d;
 b = &d;
 b->show();
}
