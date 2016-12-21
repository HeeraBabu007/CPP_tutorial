#include<iostream>
using namespace std;

class Birds
{
	public:
	string name;
	int Nofwings;
	
};

int main()
{
	Birds peacock;
	Birds parrot;
	peacock.name="mypeacock";
	parrot.name="myparrot";
	cout<<peacock.name;
	return 0;
}
