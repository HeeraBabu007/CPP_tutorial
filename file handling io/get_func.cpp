//syntax of get() function is cin.get(char *str, int len, char delim='\n')
//this function fetches character from input stream into the array str
//fetch stops if len-1.
//delimiter is not extracted

#include<iostream>
using namespace std;
int main()
{
   char str[5];
   cout<<"Please enter a string(max 5 characters):";
   cin.get(str,5);
   cout<<str<<endl;
   return 0;	
}
