#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char string[]="string to search";
	char test[]="ing";
	char*ptr;
	char str1[20]="Don";
	char str2[20]="Allen";
	int mLength;
	int mReturn;
	if (strstr(string,test))
	cout<<"String found";
	strcpy(str1,str2);
	cout<<endl<<"contents of strl is:"<<str1;
		
}
