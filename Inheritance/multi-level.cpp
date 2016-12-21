#include<iostream>
using namespace std;
class One
{
	public:
		int id;
};
class Two : public One
{
	public:
		string name;
};

class Three: public Two
{
	public:
	string address;
}
int main()
{
	Three three;
	three.id=110;
	three.name="Devank";
	three.address="Delhi";
	cout<<"My id is "<<three.id<<" Name is "<<three.name<<endl;
	cout<<" and address is "<<three.address<<endl;
}
