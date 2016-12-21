#include<fstream>
using namespace std;
int main()
{
	ofstream outobj("test.txt");
	//"<<"(stream insertion) operator is used to write data 
	//to outobj
	outobj<<25<<' '<<4567<<' '<<8910;
	return 0;
}
