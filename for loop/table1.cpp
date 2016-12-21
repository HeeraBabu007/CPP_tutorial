#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	int table[10];
	cout<<"Enter n=";
	cin>>n;
	for(i=1; i<=10; i++)
	{
		table[i] = n*i;
		//cout<<table[i]<<endl;
	}
	cout<<"Displaying";
	for(i=1; i<=10; i++)
	{
		cout<<endl<<table[i]<<endl;
	}
}
