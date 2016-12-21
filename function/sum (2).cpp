#include<iostream>
using namespace std;
class sum
{
	private: int a,b,c;
	public:
		int add()
		{
			cout<<"Enter any two numbers:";
			cin>>a>>b>>c;
			int d=a+b+c;
			return d;
		}
		public:
		int sub(int x, int y)
		{
			int z=x-y;
			return z;
		}
};

int main()
{
	sum s;
	cout<<s.add()<<endl;
	cout<<"Sub="<<s.sub(10,5);
	return 0;
}
