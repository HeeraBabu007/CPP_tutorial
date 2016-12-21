#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream in("myfile.txt");
	char array[15];
	in>>array;
    cout<<array<<endl;//space not allowed in file
	return 0;
}
