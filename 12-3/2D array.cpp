#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	long int bill[2][20];
	cout<<"Enter the number of bills: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the mobile number:\n";
		cin>>bill[0][i];
		cout<<"Enter the amount:\n";
		cin>>bill[1][i];
	}
	cout<<"Mobile Number\t\tAmount"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<bill[0][i]<<"\t\t"<<bill[1][i]<<endl;
	}
	return 0;
}
