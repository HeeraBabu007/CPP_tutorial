/*
write a program, which accepts five numbers
from command line and display it. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char *argv[])
{
	cin>>argc;
	cout<<"No. of values supplied by user is: "<<endl;
	cout<<argc;
	int i;
	
	for(i=0; i<10; i++)
	{
	     cout<<"Enter: "<<endl;
		 cin>>argv[i];
	}
	
	for(i=0; i<argc; i++)
	{
	     cout<<"values is: "<<argv[i]<<endl;
	}
}
