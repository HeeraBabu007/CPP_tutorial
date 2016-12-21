//stream insertion
#include<iostream>
using namespace std;
int main()
{
	int i=0;
	int *iptr=&i;
	char cptr[]="NIIT";
	cout<<"iptr="<<iptr<<endl;
	cout<<"cptr="<<cptr<<endl;
	cout<<"A is="<<('A'+i-10)<<endl;
	cout<<"cptr address="<<(void *)cptr<<endl;
	return 0;
}
