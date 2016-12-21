#include<iostream>
using namespace std;
class Reverse
{
	public:
		char inputstring(char f[], int n)
		{
			int i;
			cout<<"Input the string:\n";
			for(i=0;i<n;i++)
			{
				cin>>f[i];
			}
		}
		char outputstring(char f[],int n)
		{
			int j;
			cout<<"The output string is:";
			for(j=--n;j>=0;j--)
			{
				cout<<f[j];
			}
		}
};
int main()
{
	int i,j;
	char f[10];
	Reverse o;
	o.inputstring(f,5);
	o.outputstring(f,5);
	return 0;
}
