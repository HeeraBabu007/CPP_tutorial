#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age=";
	cin>>age;
	if(age<20)
	{
		if(age<15)
		{
			cout<<"You are also less than 15."<<endl;
		}
		else
		{
			cout<<"you are under twenty."<<endl;
		}
	}
	else
	{

		if(age<=20)
		{
			cout<<"You are 20."<<endl;
		}
		else
		{
			cout<<"you are above 20."<<endl;
		}
	}
	
	
	cout<<"I am not in if body.."<<endl;
}
