#include <iostream>
using namespace std;
int main()
{
	cout<<"Murari Cable company Billing"<<endl;
	cout<<"Press 1 if you are a business customer"<<endl;
	cout<<"Else \t\tPress 0"<<endl;
	
	int bs_r=20,fee_r=4,a=0,b=1,z,number_r;	
	string	residental_code,account_number_r;
	string account_number,customer_code;
	int	bs,fee,number;
	
	cin>>z;
	mathy:
	if(z==1||z==0 )
	{       
		goto neechy;       
	}            
	else 
	{	cout<<"Please Enter  0 zero or 1 one"<<endl;
		goto mathy;
	}
	neechy:
	switch (z)
	{
		case 1:
			cout<<"Namastey,you are entered at business platform"<<endl;
			break;	
	
		case 0:
			cout<<"Namastey,you are entered in residental class"<<endl;
			break;
	}
	if(z==a)
{	
	peechy:
	cout<<"Enter your four digit account Number"<<endl;
	cin>>account_number;	
	if(account_number.size()==4)
	{
		goto aage;
	}
	else 
	{
		cout<<"Please Enter the 4 digit code "<<endl;
		goto peechy;
	}
	aage:
	cout<<"Enter your fout digit customer code"<<endl;
	cin>>customer_code;
	if(customer_code.length()==4)
	{	goto aage1;	}
	else 
	{	goto aage;	}
	aage1:
		
	cin>>number;
	cout<<"Account Number: "<<account_number<<endl;
	cout<<"\nCustomer code: "<<customer_code<<endl;
	cout<<"\nSubscribed Chanels "<<number<<endl;
	cout<<"\nBasic service fee: $75.00 = "<<bs<<endl;
	cout<<"\nBill processing fee: $15 = "<<fee<<endl;
	cout<<"\nAdditional connection charges $5.00 per each,total charges= "<<number*5<<endl;
	cout<<"\nTotal Bill = "<<bs<<"+"<<fee<<"+"<<number*5<<"="<<bs+fee+(number*5)<<endl;
	cout<<"Please pay the amount :"<<bs+fee+(number*5);
}
	else if (z==b)
		{
			cout<<"Enter your four digit residental code"<<endl;
			cin>>residental_code;
			cout<<"\nEnter your four digit Account Number"<<endl;
			cin>>account_number_r;
			cout<<"\nSubscribed Premium channels between 0 and 10: "<<endl;
			cin>>number_r;
			cout<<"Each chanel charges is $2.00"<<endl;
			cout<<"residental code :"<<residental_code<<endl;
			cout<<"Account Number :"<<account_number_r<<endl;
			cout<<"Chanels: "<<number_r<<endl;
			cout<<"Bill processing fee:"<<fee_r<<endl;
			cout<<"Basic service fee:"<<bs_r<<endl;
			cout<<"Total Bill ="<<fee_r<<"+"<<bs_r<<"+"<<number_r*2<<" = "<<fee_r+bs_r+number_r*2<<endl;
			cout<<"Please give $"<<fee_r+bs_r+number_r*2<<endl;
		}
}