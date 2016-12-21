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

int main()
{
	Two two;
	two.id=101;
	two.name="Heera";
	cout<<"My id is "<<two.id<<" and Name is"<<two.name<<endl;
}
