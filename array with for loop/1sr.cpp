#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int i;
	
    cout<<"Enter 5 values";
    
	for(i=0; i<=4;i++)
	{ 
	    cin>>a[i];
	}
	cout<<"Displaying";
	for(i=0;i<=4;i++)
	{
	     cout<<a[i]<<endl;
	}
}
