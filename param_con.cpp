#include<iostream>
using namespace std;
class A
{
	public:
		int i, j;
		A(int a, int b)
		{
			i=a;
			j=b;
		}
};
int main()
{
	int k, l;
	cin>>k>>l;
	A a(k,l);
	cout<<a.i<<endl;
	cout<<a.j;
}
