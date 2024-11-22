#include <iostream>
using namespace std;
int main()
{
		int a=1,fee=15,bs=75,number;
		string	residental_code,account_number_r;
		int bs_r=20,fee_r=4,number_r;
		int b=0,z;
		string customer_code,account_number;	char three=3;
//	variables for terminating
		int count_1=3,count_2,count_3,count_4,count_5,count_6;
		cout<<three<<"RADHE RADHE "<<three<<endl;
		cout<<"Kirshin Murari Cable company Billing"<<endl;
		cout<<"Press 1 if you are a business customer"<<endl;
		cout<<"Else \t\tPress 0"<<endl;
		
//	mathy, if not 0 or 1 otherwise execute switch statement 
		mathy:
		cin>>z;
//	first if - else statement	for valid entry Number 
		if(z==a||z==b)
		{	
//	switching the class of Customer whether Business or residental
		switch (z)
		{
		case 1:
			cout<<"Namastey,you are entered at business platform"<<endl;
			break;	
	
		case 0:
			cout<<"Namastey,you are entered in residental class"<<endl;
			break;
		}
		}
		else 
		{	cout<<"\aPlease Enter 0 or 1 "<<endl;		goto mathy;		}
//	first  if - else if statement	for switching decision		(starts here)
		if(z==a)
		{	
//	up(defined)	& down(declared), if account number is not 4 digit code
		up:
		cout<<"Enter your four digit account Number"<<endl;
		cin>>account_number;
//	Second if - else statement	for valid account_number
		if(account_number.length()==4)
		{	goto down;}
		else 
		{	--count_1;
			cout<<"\aPlease Enter valid account number (4 Digit account Number) "<<endl;	
			goto up;
		}			
		down:
		cout<<"Enter your fout digit customer code"<<endl;
	
//	up2 and down2 ,if customer_code is not 4 digit code
		up2:
		cin>>customer_code;
//	third if - else  statement for valid customer code
		if(customer_code.length()==4)
		{	goto	down2;}
		else 
		{	cout<<"\aEnter the Valid Customer Code (4 Digit Code) "<<endl;	
		goto up2;	
		}
		down2:
//	up3 and down3, if Number of channels is not between 1 and 10
		up3:
		cout<<"Enter Number of Subscribed Premium chanels,between 1 and 10"<<endl;
		cin>>number;
		cout<<endl;
//	fourth if - else statement for Valid Number of channels
		if(number>0 && number<=10)
		{	goto down3;}
		else 
		{	cout<<"\aEnter the Valid Number of Subscribed Premium Channel ,(between 1---10)"<<endl;
		goto up3;
		}
		down3:
//	the output of business customer's  bill 
		cout<<"Account Number: "<<account_number<<endl;
		cout<<"\nCustomer code: "<<customer_code<<endl;
		cout<<"\nSubscribed Chanels "<<number<<endl;
		cout<<"\nBasic service fee: $75.00 = "<<bs<<endl;
		cout<<"\nBill processing fee: $15 = "<<fee<<endl;
		cout<<"\nAdditional connection charges $5.00 per each,total charges= "<<number*5<<endl;
		cout<<"\nTotal Bill = "<<bs<<"+"<<fee<<"+"<<number*5<<"="<<bs+fee+(number*5)<<endl;
		cout<<"Please pay the amount : $"<<bs+fee+(number*5);
		}
//		Business Class is finish here
//		here starts the Residental Class
//		first if - else if statement for switching decision (ends here)
			else if (z==b)
			{	
//		upA and downA for valid residental code 
			upA:
			cout<<"Enter your four digit residental code"<<endl;
			cin>>residental_code;
//		fifth if - else statement for valid residental code
			if(residental_code.size()==4)
			{	goto downA;	}
			else 
			{	cout<<"\aPlease Enter Valid residental code (4 digit code)"<<endl;
					goto upA;}
			downA:
//		upB and downB for valid account Number
			upB:
			cout<<"\nEnter your four digit Account Number"<<endl;
			cin>>account_number_r;
//		sixth if - else statement for valide account Number
			if(account_number_r.size()==4)
			{	goto downB;}
			else 
			{	cout<<"\aPlease Enter the Valid four digit account Number"<<endl;
					goto upB;	}
			
//			upC and downC for valid number of channels
			upC:
			downB:
			cout<<"\nSubscribed Premium channels between 1 and 10: "<<endl;
			cin>>number_r;
			if(number_r>0 && number_r<=10)
			{	goto downC;}
			else 
			{	cout<<"\aPlease Enter the Number of Channels between 1---10"<<endl;
				goto upC;}
			downC:
//		output of the Residental Customer' bill
			cout<<"Each chanel charges is $2.00"<<endl;
			cout<<"residental code :"<<residental_code<<endl;
			cout<<"Account Number :"<<account_number_r<<endl;
			cout<<"Chanels: "<<number_r<<endl;
			cout<<"Bill processing fee:"<<fee_r<<endl;
			cout<<"Basic service fee:"<<bs_r<<endl;
			cout<<"Total Bill ="<<fee_r<<"+"<<bs_r<<"+"<<number_r*2<<" = "<<fee_r+bs_r+number_r*2<<endl;
			cout<<"Please deposit the amount $"<<fee_r+bs_r+number_r*2<<endl;
		}

		
}