#include<iostream>
using namespace std;
class ascending
{
	public:
		int i,j;
		float asc(float f[],int n)
		{
			for(i=1;i<n;i++)
			{
				for(j=0;j<i;j++)
				{
					if (f[j]>f[i])
					{
						float temp;
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
	int i,n;
	float a[20];
	cout<<"Enter the number of inputs(less than 20): ";
	cin>>n;
	cout<<"Enter the amounts:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	ascending o;
	o.asc(a,n);
	cout<<"The final output is:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
