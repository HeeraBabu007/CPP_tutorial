//single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class CustomerDetail
{
	private:
		int cardnumber=1021;
	public:
	void CustomerDetailfun(string name, string address)
	{
		cout<<name<<"\t"<<address;
	}
	
};

int main()
{
	CustomerDetail  cd;
	//cout<<cd.id;
	cd.CustomerDetailfun("Heera","DELHI");
	return 0;
}
