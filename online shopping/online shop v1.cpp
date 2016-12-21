#include<iostream>
using namespace std;
int main()
{
	int TotalPrice=0;
	int TotalDiscount=0;
	int passcode;
	int price1=120, price2=100, price3=140, price4=110, price5=110;
	cout<<"***************List of Products*************"<<endl;
	cout<<"1. Apple"<<endl;
	cout<<"2. Grapes"<<endl;
	cout<<"3. Mango"<<endl;
	cout<<"4. Banana"<<endl;
	cout<<"5. Watermelan"<<endl;
	cout<<endl<<endl;
	
	floor1:
	cout<<"Enter your passcode"<<endl;
	cin>>passcode;
	if(passcode==123)
	{

        cout<<"Welcome Admin !"<<endl;
		cout<<"Enter price of products"<<endl;
		cout<<"Apple price="<<endl;
		cin>>price1;
		cout<<"Grapes price="<<endl;
		cin>>price2;
		cout<<"Mango price="<<endl;
		cin>>price3;
		cout<<"Banana price="<<endl;
		cin>>price4;
		cout<<"Watermelan price"<<endl;
		cin>>price5;
		goto floor1;
	}
	else
	{
	    int choice;
		do
		{
			cout<<"Welcome User !"<<endl;
		    cout<<"Enter your choice User..."<<endl;

			cout<<"Enter your choice"<<endl;
			cin>>choice;
			
		switch(choice)
		{
			case 1:
				{
					cout<<"You have brought Apple"<<endl;
					TotalPrice = TotalPrice+price1;
					break;
				}
			case 2:
				{
					cout<<"You have brought Grapes"<<endl;
					TotalPrice = TotalPrice+price2;
					break;
				}
			case 3:
				{
					cout<<"You have brought Mango"<<endl;
					TotalPrice = TotalPrice+price3;
					break;
				}
			case 4:
				{
					cout<<"You have brought Banana"<<endl;
					TotalPrice = TotalPrice+price4;
					break;
				}
			case 5:
				{
					cout<<"You have brought Watermelan"<<endl;
					TotalPrice = TotalPrice+price5;
					break;
				}		
		}
		cout<<"You have to pay: "<<TotalPrice<<endl;
		choice ++;	
	}
	while(choice<=5);
	}
}
