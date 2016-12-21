//multi-level inheritance  A---->B----->C
#include<iostream>
using namespace std;
class A
{
	public:
		int add(int x, int y)
		{
			int z=x+y;
			return z;
		}
};

class B : public A
{
	
};

class C: public B
{
	public:
		int sub(int x, int y)
		{
			return x-y;
		}
};
int main()
{
	C obj;
	cout<<obj.add(100, 200);
	cout<<endl;
	cout<<obj.sub(200, 100);
}
