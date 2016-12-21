#include<iostream>
using namespace std;
class A
{
	public:
		int add(int x, int y)
		{
			return x+y;
		}
		string add(string x, string y)
		{
			return x+y;
		}
		
		int add(int x, int y, int z)
		{
			return x+y+z;
		}
};

int main()
{
	A a;
	cout<<a.add("Heera", "babu")<<endl;
	cout<<a.add(10,20)<<endl;
	cout<<a.add(10,20,30)<<endl;
	return 0;
}

