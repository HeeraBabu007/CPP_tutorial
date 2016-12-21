#include<iostream>
#include<string.h>
using namespace std;
void main()
{
	char paragraph="string to search";
	char test[]="ing";
	char *ptr;
	char str1[20]="Don";
	char str2[20]="Allen";
	int length1;
	int length2;
	
	if(strstr(paragraph, test))
	cout<<"String found";
	
	strcpy(str1, str2);
	cout<<endl;
	cout<<"Content of String is: "<<str1;
	
	strcpy(str1, "C++ Language");
	cout<<endl;
	cout<<"Final Content of Str1 is: "<<str1;
	
	length1=strlen(str1);
	cout<<endl;
	cout<<"The length of st1 is: "<<length1;
	
	length2=strcmp(str1, str2);
	if(length2==1)
	{
		cout<<endl;
		cout<<"The Strings match is successful";
	}
	else
	{
		cout<<endl;
		cout<<"The strings match is not completed..";
	}
	
}
