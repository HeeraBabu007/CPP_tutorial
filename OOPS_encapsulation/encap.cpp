#include<iostream>
using namespace std;

class Properties
{
	private:
		int id;
		public:
			void setId(int x)
			{
				id=x;
			}
			int getId()
			{
				cout<<"id is "<<id;
			}
};
int main()
{
	Properties obj;
	int mycardid;
	cout<<"Enter your Credit card No "<<endl;
	cin>>mycardid;
    obj.setId(mycardid);
	obj.getId();
	
}
