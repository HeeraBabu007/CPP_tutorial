#include<stdio.h>
int main()
{
 char ch;
 printf("\n Enter a character ");
 scanf("%c",&ch);
 if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
 {
	printf("\n You have entered a vowel"); 
 }
 else
 {
	printf("\n You have entered a consonant");
 }
}
