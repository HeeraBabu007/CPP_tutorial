#include<iostream>
using namespace std;
int main()
{
	enum months{ jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec
	};
	int i,s[12],sum=0;
	for(i=0;i<12;i++)
	{
		cout<<"Enter the salary for month"<<i+1<<": ";
		cin>>s[i];
	}
	cout<<"Enter the desired month: ";
	enum months m=apr;
	//cin>>m;
	switch(m)
	{
		case 1:
			cout<<"The total salary is "<<s[0]<<endl;
		default:
			for(i=0;i<m;i++)
			{
				sum=sum+s[i];
			}
			cout<<"The total salary is "<<sum<<endl;
	}
	return 0;
}
