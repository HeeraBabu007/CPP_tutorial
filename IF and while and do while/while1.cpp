#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number="<<endl;
	cin>>n;
	int i=1;
	while(i<=10)
	{
       int table=n*i;
       cout<<table<<endl;
      i++;
	}
}
