#include <iostream>
using namespace std;
int main()
{
	char three=3,sixteen=16;	int a,b,c;
	cout<<three<<" RADHE RADHE "<<three<<endl;
	cout<<"Enter the Number of purchased books"<<endl;		cin>>a;
	if(a<0){	cout<<" you purchased books "<<a<<" are in-sufficient"<<endl;}
	else
	{
	switch(a)
	{	case 0: case 1:cout<<" on the "<<a<<" books you have earned Zero Points "<<endl;	break;
		case 2: case 3:cout<<" on the "<<a<<" books you have earned 5 Points "<<endl;		break;
		case 4:	case 5:cout<<" on the "<<a<<" books you have earned 15 Points "<<endl;		break;
		case 6: case 7:cout<<" on the "<<a<<" books you have earned 30 Points "<<endl;		break;
		case 8:	cout<<" on the "<<a<<" books you have earned 60 Points "<<endl;				break;
		default:cout<<" on the "<<a<<" books you have earned 60 Points "<<endl;				break;	    	
	}
	}
	cout<<"\n Enter the Number of packages "<<endl; cin>>b;
	if(b>=10 && b<=19)	{	cout<<"on the "<<b<<" packages you have earned a discount of 10%"<<endl;} 
	else if(b>19 && b<=49) {cout<<" on the "<<b<<" packages you have earned a discount of 20%"<<endl;	}
	else if(b>50 && b<=99) {cout<<" on the "<<b<<" packages you have earned a discount of 30%"<<endl;	}
	else if(b>=100 || b>100) {cout<<" on the "<<b<<" packages you have earned a discount of 40%"<<endl;	}
	else  {cout<<" on the "<<b<<" packages you have earned no discount"<<endl;	}
	cout<<endl;
	cout<<"Enter the weight of a package in pound and the program will say you the shipping charges "<<endl;
	cout<<"Enter the weight "<<endl; cin>>b;
	if(b>0)
	{	switch(b)
	{	case 0: case 1: case 2: cout<<" on the "<<b<<" pounds the shipping charges is $1.50 "<<endl;			break;
		case 3: case 4: case 5: case 6:cout<<" on the "<<b<<" pounds the shipping charges is $3.00 "<<endl;		break;
		case 7: case 8: case 9: case 10:cout<<" on the "<<b<<" pounds the shipping charges is $4.00 "<<endl;	break;
		default: cout<<" on the "<<b<<" pounds the shipping charges is $4.75 "<<endl;	
	}
	}
	else 
	{
		cout<<" on the "<<b<<" pounds the shipping charges is $0.00 "<<endl;	
	}
}