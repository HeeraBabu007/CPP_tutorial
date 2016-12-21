#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter Number="<<endl;
	cin>>n;
	cout<<"Table is"<<endl;
	for(i=1; i<=10; i++)
	{
		int table=n*i;
		cout<<table<<endl;
	}
}
