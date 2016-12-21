#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int a[2][2];
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cin>>a[i][j];
		}
    }
    for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			cout<<a[i][j];
		}
    
    	cout<<endl;
    }
	}

