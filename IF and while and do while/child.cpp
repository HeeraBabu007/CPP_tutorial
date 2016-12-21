#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age=";
	cin>>age;
	
	if(age>18)
	{
		cout<<"You are allowed to see movie"<<endl;
	}
	else
	{
		cout<<"False part of if"<<endl;
	}
	cout<<"OUTER block of if";
	return 0;
}
