#include<iostream>
using namespace std;
int main()
{
	int TotalPrice=0;
	int Discount=0;
	cout<<"*****Juice Corner*****"<<endl;
	cout<<"1. Apple"<<endl;
	cout<<"2. Mango"<<endl;
	cout<<"3. Banana"<<endl;
	cout<<"4. Grapes"<<endl;
	
	int choice;
	cout<<"Enter you choice = "<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
				cout<<"you have selected Apple."<<endl;
				int price=120;
				int dis=10;
				TotalPrice = TotalPrice+price;
				Discount  = Discount+dis;
				break;
			}
		case 2:
			{
				cout<<"you have selected Mango."<<endl;
				int price=100;
				int dis=20;
				TotalPrice = TotalPrice+price;
				Discount  = Discount+dis;
				
				break;
			}
			
			case 3:
			{
				cout<<"you have selected Banana."<<endl;
				int price=130;
				int dis=0;
				TotalPrice = TotalPrice+price;
				Discount  = Discount+dis;
				break;
			}
			
			case 4:
			{
				cout<<"you have selected Grapes."<<endl;
				int price=140;
				int dis=20;
				TotalPrice = TotalPrice+price;
				Discount  = Discount+dis;
				break;
			}
		
	}
     cout<<"You have TotalPrice="<<TotalPrice<<endl;
     cout<<"You have discount="<<Discount<<endl;
     cout<<"You have to pay"<<TotalPrice-Discount<<endl;
}
