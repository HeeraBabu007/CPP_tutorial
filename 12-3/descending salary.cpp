#include<iostream>
using namespace std;
class descending
{
	public:
		int salaries(int f[], int n)
		{
			int i,j;
			for(i=1;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if (f[j]<f[i])
					{
						int temp;
						temp=f[j];
						f[j]=f[i];
						f[i]=temp;
					}
				}
			}
		}
};
int main()
{
	int i,n,s[100];
	cout<<"Enter the number of salaries: ";
	cin>>n;
	cout<<"Enter the salaries:\n";
	for(i=0;i<n;)
	{
		cin>>s[i];
		if (s[i]!=0)
			i++;
		else
		{
			cout<<"Salary cannot be zero, enter again\n";
			continue;
		}	
	}
	descending d;
	d.salaries(s,n);
	cout<<"The ordered salaries are:\n";
	for(i=0;i<n;i++)
		cout<<s[i]<<endl;
	return 0;
}
