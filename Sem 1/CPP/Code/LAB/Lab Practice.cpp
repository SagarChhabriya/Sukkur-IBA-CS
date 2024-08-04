#include <iostream>
#include <unistd.h>
using namespace std; 
int s,fst,sec,one,two;
int switcher();	int first(); int evod();	int compute();	int retired(); int employed();
int main()
{
//	cout<<"Question NO one"<<endl;
//	cout<<"Press 1 to find the sum---Press 2 to find even or odd" <<endl;
//	cin>>s;
//	switcher();
//	system("cls");
	cout<<"Question No two "<<endl;
	compute();
}
switcher()
{
	switch(s)
	{	default : cout<<"Entered Value is out of Range"<<endl;	break;
		case 1: first();	break;
		case 2: evod();		break;		}
}
first()
{
	cout<<"Enter two Numbers for sum "<<endl;
	cout<<"Enter first Number"<<endl;	cin>>fst;
	cout<<"Enter second Number "<<endl;	cin>>sec;
	cout<<"Here is the Sum "<<fst+sec<<endl;
}
evod()
{
		cout<<"Enter two to find even or odd"<<endl;
		cout<<"Enter first Number "<<endl;		cin>>one;
		cout<<"Enter Second Number "<<endl;		cin>>two;
		if(one%2==0)
		{	cout<<one<<" is Even Number "<<endl;	}
		if(one%2==1)
		{	cout<<one<<" is Odd Number "<<endl;		}
		if(two%2==0)
		{	cout<<two<<" is Even Number "<<endl;	}
		if(two%2==1)
		{	cout<<two<<" is Odd Number "<<endl;		}	
		else 
		{	cout<<"Entered Value is Not Valid"<<endl;}
}
//	first Question Complete
compute()
{
	form:
	cout<<"If you are Retired --Press 1"<<endl;
	cout<<"If you are Employed --Press 2"<<endl;
	int form;	cin>>form;
	switch(form)
	{
			case 1: retired();	break;
			case 2:	employed();	break;
			default : cout<<"Enter Valid value "<<endl;	sleep(2);
			system("cls");		goto form;
	}
	
}
retired()
{	age:
	cout<<"Retired Employees Platform"<<endl<<"Enter your Age"<<endl;
	int age;	cin>>age;
	if(age<60 || age>120 )
	{	cout<<"You Entered Value is Out of Range__Please Enter between 60--120"<<endl;	sleep(2);
		system("cls"); goto age;}
	if(age>=60 && age<=70)
	{	cout<<"Your Pension  is "<<30000<<endl;	}
	if(age>70 && age<120)
	{	cout<<"Your Pension is "<<40000<<endl;	}
	
	
}
employed()
{
	cout<<"Employed Platform "<<endl<<"Enter the Worked Days "<<endl;
	int days,hours;	cin>>days;
	valid:
	cout<<"Enter the Hours if You have Worked Extra---otherwise press 99 "<<endl;		cin>>hours;
	if(hours==99)	
	{		cout<<"Payment of "<<days<<" days is "<<days*1000<<endl;   	}
	else if(hours>0 && hours<=3)
	{	goto okfunc;}
	else
	{	cout<<"\aYour Entered hour are not Invalid Enter the Valid time between 0--3"<<endl;	goto valid;}
	okfunc:
	{	
		
		cout<<"Entered Days are "<<days<<" and the Gross Salary is "<<days*1000<<endl;
		cout<<"Extra work Payment is "<<hours*300<<endl;
	}
	
}
