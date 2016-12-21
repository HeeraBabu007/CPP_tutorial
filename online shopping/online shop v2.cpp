//use header files
#include<iostream>
using namespace std;
//define main function
int main()
{
	//define variables and initialized it so that 
	//no garbage value will it contain
	int TotalPrice=0;
	int TotalDiscount=0;
	int passcode;
	//initialize product price for User login
	int price1=120, price2=100, price3=140, price4=110, price5=110;
	cout<<"***************List of Products*************"<<endl;
	cout<<"1. Apple"<<endl;
	cout<<"2. Grapes"<<endl;
	cout<<"3. Mango"<<endl;
	cout<<"4. Banana"<<endl;
	cout<<"5. Watermelan"<<endl;
	cout<<endl<<endl;
	
	// define a floor level for goto
	floor1:
	//define a credential for login user and admin
	cout<<"Enter your passcode"<<endl;
	cin>>passcode;
	cout<<endl<<endl;
	if(passcode==123)
	{
		// if admin login then update product detail
        cout<<"Welcome Admin !"<<endl;
		cout<<"Enter price of products"<<endl;
		cout<<endl<<endl;
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
		//if price updated then go to again login
		goto floor1;
	}
	else
	{
		//if user login
		cout<<endl<<endl;
		cout<<"Welcome User !"<<endl;
	    cout<<"Enter your choice User..."<<endl<<endl<<endl;
	    int choice;
		do
		{
			//make repetive statement if user buy a product
			//then again shopping alert !
			cout<<endl<<endl;
			cout<<"Do you want to continue shopping..."<<endl;
			cout<<"If yes press Y otherwise press N "<<endl;
			char confirm;
			cin>>confirm;
			if(confirm=='y' || confirm=='Y')
			{
			//make switch with multiple product
			cout<<"Enter your choice"<<endl;
			cin>>choice;
			switch(choice)
			{
			case 1:
				{
					cout<<"You have brought Apple"<<endl;
					//update TotalPrice in each case same
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
				default:
				{
					cout<<"Kindly choose correct item !!"<<endl<<endl;
				}		
			}
		}
		else
		{
			//if user doesn't want to continue shopping
			cout<<endl<<endl;
			cout<<"Thanks for shopping !"<<endl;
		}
		//after shopping finish
		cout<<endl<<endl;
		cout<<"You have to pay: "<<TotalPrice<<endl;
		choice ++;	
	}
	while(choice<=5); //end of loop with no of cases
	}
}
