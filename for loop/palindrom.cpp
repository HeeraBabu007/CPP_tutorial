#include<iostream>
using namespace std;
int main()
{

	//take flag=1
	char s[10],c;
	int i,j,flag=1,len;

	//getline()
	cout<<"enter string(max.8):";
	//cin.getline(s,10);
	gets(s);
 
	//FOR find the length of string
	for( len=0;s[len]!='\0';len++);
	
	//checking char
	for(i = 0,j = len-1; i<len/2;i++,j--)
	{
 		if(s[i]!=s[j])
 		{
  			flag=0;
  			break;
 		}
	}
 	if(flag!=0) //if flag is true.
 		cout<<"it is a palindrome.\n";
 	else
 		cout<<"it is not a palindrome.\n";
	}
