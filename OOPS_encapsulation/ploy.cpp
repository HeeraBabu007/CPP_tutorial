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
	
	int add(int x, int y, int z)
	{
		int k=x+y+z;
		return k;
	}
	string add(string x, string y)
	{
		string z=x+y;
		return z;
	}	
	
};
int main()
{
	A  a;
	cout<<a.add(10, 20);
	cout<<endl;
	cout<<a.add("Heera","Babu");
	cout<<endl;
	cout<<a.add(10,20,30);
	return 0;
}
