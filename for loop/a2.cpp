#include<iostream>
using namespace std;
int main()
{
    int p[10];
    cout<<"Enter 10 values ";

	int i;
	for(i=0; i<=9; i++)
	{
			cin>>p[i];
	}
    
    cout<<"Displaying...";
    for(i=0; i<=9; i++)
	{
			cout<<p[i]<<endl;
	}
}
