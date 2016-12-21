#include<iostream>
using namespace std;
int main()
{
   char l [10];
   int v=0,i;
    
	cout<<"enetr the line:\n:";
    gets(l);
    for(i=0;l[i]!='\0';++i)
    {
        switch(l[i])
        {
  			case'a':
  			case'A':
  
  			case'e':
  			case'E':
  
  			case'i':
  			case'I':
  
  			case'o':
  			case'O':
  
  			case'u':
     		case'U': ++v;
 		}
	}
	cout<<"total vowels is"<<v<<endl;
}
