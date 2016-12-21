#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream inobj("test.txt");
	int i, j, k;
	//">>"(stream extracter) operator is used to read data 
	//from inobj into 3 variable
	inobj>>i>>j>>k;
	//the data in the three variable is displayed using cout
	cout<<i<<endl<<j<<endl<<k;
	return 0;
}
