#include<iostream>
using namespace std;

class Student
{
	public:
	int id;
	string name;
};

int main()
{
	Student devank;
	devank.id=101;
	devank.name="Devank Kaushik";
	cout<<"Welcome to NIIT "<<devank.name;
}

