#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	for (i=1;i<=100;i++)
	{
		sum=sum+i;
		cout<<sum<<endl;
	}
	cout<<"The sum of numbers till 100 is: "<<sum;
	return 0;
}
