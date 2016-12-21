//polymorphysm:function overloading
#include<iostream>
using namespace std;
class A
{
	public:
		int add(int x, int y)
		{
			return x+y;
		}
		int add(int x, int y, int z)
		{
			return x+y+z;
		}
		string add(string fn, string ln)
		{
			return fn+ln;
		}
};
int main()
{
	A a;
	cout<<a.add("Hritik", "Dahiya");
	cout<<endl;
	cout<<a.add(1000, 500);
	cout<<endl;
	cout<<a.add(10,20,30);
}
