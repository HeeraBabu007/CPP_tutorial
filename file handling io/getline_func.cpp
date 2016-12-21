/*
 SIMILAR TO get() function
 delimiter is also extracted in getline()
*/
#include<iostream>
using namespace std;
int main()
{
   char str[10];
   cout<<"input:";
   cin.getline(str,10,'N');
   cout<<"OUTPUT:"<<str<<endl;
   return 0;	
}
