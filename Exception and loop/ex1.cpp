#include<iostream>
#include <exception>
using namespace std;
int main()
{
	int age2;
	try
	{
		int age;
		cout<<"Enter your age"<<endl;
		cin>>age;
		if(age>100 || age<1) throw age2;
		cout<<"After throw statement..."<<endl;
	}
	catch(int age2)
	{
		cout<<"Enter another age"<<endl;
		cin>>age2;
		cout<<"thanks your age is "<<age2<<endl;
	}
	cout<<"End of try-catch"<<endl;
	return 0;
}
