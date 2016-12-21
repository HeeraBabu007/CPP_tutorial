#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char paragraph[]="string to search";
	char test[]="ing";
	
	if(strstr(paragraph, test))
	cout<<"String found";
	
}
