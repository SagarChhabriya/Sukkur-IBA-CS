#include <iostream>
#include <conio.h>
#include <cctype>
#include <string>
#include <unistd.h>
using namespace std; 
int s,fst,sec,one,two;
float days,product_price,tax_rate,result;
int switcher() , first() , evod() , compute() , retired() , employed();
int hours(), vowel() , max() , permanant() , charges(), daily_wages();
int divisble_7() , deletion();	double sale_price(double,double);	int sort(); 
int eleventh() ,replace(),triger();	
int main()
{
//	cout<<"Question NO one"<<endl;
//	cout<<"Press 1 to find the sum---Press 2 to find even or odd" <<endl;
//	cin>>s;
//	switcher();	sleep(2);		system("cls");
//	cout<<"Question No two "<<endl;
//	compute();	sleep(2);		system("cls");			//Second Question
//	charges();									//Third Question
//	hours();		sleep(2);		system("cls");			//Fourth Question
//	sort();										//fifth Question
//	divisble_7();									//Sixth Question
//	vowel();			sleep(2);		system("cls");		//Seventh Question
//	max();										//Eighth Question
////	deletion();									//Ninth Question
//	Tenth Question Starts
//	cout<<endl<<"Enter the Product price and the tax rate "<<endl;
//	cout<<"Enter the Product Price"<<endl;		cin>>product_price;
//	cout<<"Enter the Tax rate "<<endl;			cin>>tax_rate;
//	result=sale_price(product_price,tax_rate);
//	cout<<"Total amount is "<<result<<endl; 	sleep(2);	system("cls");
//	Tenth Question Complete
//	eleventh();								//Eleventh Question
//	replace();								//twelfth Question
	triger();
	return 0;
}
switcher()
{
	switch(s)
	{	default : cout<<"Entered Value is out of Range"<<endl;	break;
		case 1: first();	break;
		case 2: evod();		break;		}
		return 0;
}
first()
{
	cout<<"Enter two Numbers for sum "<<endl;
	cout<<"Enter first Number"<<endl;	cin>>fst;
	cout<<"Enter second Number "<<endl;	cin>>sec;
	cout<<"Here is the Sum "<<fst+sec<<endl;
	return 0;
}
evod()
{
		cout<<"Enter two to find even or odd"<<endl;
		cout<<"Enter first Number "<<endl;		cin>>one;
		cout<<"Enter Second Number "<<endl;		cin>>two;
		if(one%2==0 || one%2==0)
		{	cout<<one<<" is Even Number "<<endl;	}
		if(one%2==1 || one%2==-1)
		{	cout<<one<<" is Odd Number "<<endl;		}
		if(two%2==0 || two%2==-0)
		{	cout<<two<<" is Even Number "<<endl;	}
		if(two%2==1 || two%2==1)
		{	cout<<two<<" is Odd Number "<<endl;		}	
		else 
		{	cout<<"Entered Value is Not Valid"<<endl;}
		return 0;
}
//	first Question Complete
//	Second Question
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
	return 0;
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
	
	return 0;
}
employed()
{
	cout<<"Employed Platform "<<endl<<"Enter the Worked Days "<<endl;
	int days; double hours; char yn;
	cin>>days; 
	valid:
	yn:
	cout<<"Press 'Y' if You have Worked Extra---otherwise press 'N' "<<endl;		
	cin>>yn;
	switch(yn)
	{	default : cout<<"Entered value is Not Valid..."<<endl;	goto yn;	break;
		case 'n':
		case 'N':	cout<<"Payment of "<<days<<" days is "<<days*1000<<endl;  	break;
		case 'Y':
		case 'y':	
		hcon:
		cout<<"Enter the Hours of Extra Work "<<endl;	cin>>hours;
		if(hours>0 && hours<=3)
		{
		cout<<"Entered Days are "<<days<<" and the Gross Salary is "<<days*1000<<endl;
		cout<<"Extra work Payment is "<<hours*300<<endl;	
		cout<<"Total Amount is "<<(days*1000)+hours*300<<endl;
		}
		else 
		{	cout<<"Enter the Valid Time of hour between 0---3"<<endl;
			goto	hcon; 
		}
		break;		
	}
	return 0;
}
//	Question Second Complete
//	Question Three
charges()
{	 int type;	char continuity;
	type:
	cout<<"Press---1,if you are Permanant,\nPress---2,if you are from Daily Wages"<<endl;
	cin>>type;
	switch(type)
	{	default :cout<<"Entered Value is Not Valid "<<endl;
			    cout<<"\aPlease Enter Valid Input"<<endl;	sleep(2);
			    system("cls");							goto type;
		case 1: cout<<"You are Entered at Permanant Platform "<<endl;
			   permanant();	break;
		case 2:cout<<"You are Entered at Daily Wages Platform"<<endl;
			  cout<<"The Daily Wage Employee Are Paid 400 per hour"<<endl;
			  daily_wages();	break;
	}
	cout<<"Do you wanna Continue Again,Press---Y(Yes),Press---N(No) "<<endl;
	cin>>continuity;
	if(continuity=='y'||continuity=='Y')
	{	sleep(2); system("cls");	goto type;}
	if(continuity=='n'||continuity=='N') 
	{	cout<<"Ok...as your wish"<<endl;}
	return 0;
	
}
permanant()
{
	char det;		float hours,amount;
	valid_choice:
	cout<<"What would you want to be calculated...Salary(Press---S) or Medical charges(Press---M)"<<endl;
	cin>>det;	
	if(det=='s'||det=='S'||det=='m'||det=='M')
	{
	switch(det)
	{	default :cout<<"Invalid Input"<<endl;	break;
		case 's':
		case 'S':	cout<<"You are at Permanant Platform...For Salary "<<endl;
		val_hours:
		cout<<"Enter the Worked hours "<<endl;		cin>>hours;
		if(hours>0 && hours<=18)
		{	
			cout<<"Permanant Employees are paid 800 per hour so your Amount will be  "<<hours*800<<" on "<<hours<<" hours "<<endl;
		}	
		else 
		{	cout<<"Enter the Valid hours between 0---18"<<endl;	goto val_hours;}
		break;
		case 'm':
		case 'M':cout<<"You are at Permanant Platform...For Medical Charges"<<endl;
			    cout<<"Enter your Salary's Amount "<<endl;	
				cin>>amount;
			    cout<<"Permanant Employees are paid 5% Medical Charges of their total salary "<<endl;
			    cout<<"Medical Charges' amount is "<<(amount/100)*5<<endl;
		break;
	}
	}
	else 
	{
		cout<<"\aPlease Choice the Valid one "<<endl; goto valid_choice;
	}	
	return 0;
}
daily_wages()
{	
	char det;	float worked_hours,salary;
	cout<<"For Salaray Press---S, For Medical Charages Press---M"<<endl;
	cin>>det;
	switch(det)
	{	cout<<"You are At Daily Wages Platfrom "<<endl;
		case 's':
		case 'S':
		Valid_Hours:
		cout<<"Enter the Worked Hours "<<endl;		cin>>worked_hours;
		if(worked_hours>0 && worked_hours<=18)
		{
		cout<<"The Amount Made on "<<worked_hours<<" hours is "<<worked_hours*400<<endl;	
		}	
		else 
		{	cout<<"Please Enter the Valid Hours "<<endl;	goto Valid_Hours;}
		break;
		case 'm':
		case 'M':	cout<<"Enter Your Salary "<<endl;	cin>>salary;
				cout<<"The Medical Charges Made on "<<salary<<" is "<<(salary/100)*3<<endl;
				break;
	}
	return 0;
}


//	Question Three Complete
//	Question Four
hours()
{
	correction:
	cout<<"Enter the Number of Days to be Converted in Minutes or hours"<<endl;
	cin>>days;
	if(days>0)
	{
	cout<<"Switch The Case...Press H for Hours , Press M for Minutes"<<endl;
	char cas;	cin>>cas;
	switch(cas)
	{	default : cout<<"Enter the Valid Input "<<endl;	break;
		case 'h':
		case 'H': cout<<"Hours of "<<days<<" days are "<<days*24<<endl; break;
		case 'm':
		case 'M':	cout<<"Minutes of "<<days<<" days are "<<days*1440<<endl; break;
	}
	}
	else 
	{
	cout<<"Please Enter Valid Value "<<endl;	sleep(2);	system("cls");	goto correction;
	}
	return 0;
}	
//	Question Four Complete
//	Questin Five
sort()
{
	long double a[10],count=0,b[1];
	cout<<"Enter Ten Numbers "<<endl;
	for(int i=0; i<10; i++)
	cin>>a[i];
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++ )
		{
			if(a[j]<a[j+1])
			{	a[j]=a[j];	}
			else if(a[j]>a[j+1])
			{	b[0]=a[j];
				a[j]=a[j+1];
				a[j+1]=b[0];
			}
		}
	}
	cout<<endl<<" Asscending "<<endl;
	for(int i=1; i<=10; i++)
	{
			cout<<a[i]<<" ";
	}	
	cout<<endl<<"Descending "<<endl;
	for(int i=10; i>0; i-- )
	cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}
//	Question five Complete
//	Question six
divisble_7()
{	int array[10],even[10],odd[10],sev[10],count_even=0,count_odd=0,count_sev=0;
	cout<<"Enter any 10 Integers...The Program Will Show You Even_odd_Number Divisble by 7 "<<endl;
	for(int i=0; i<10; i++)
	{	cin>>array[i];	}
	cout<<endl<<"Printing Numbers "<<endl;
	for( int i=0; i<10; i++)
	{	if(array[i]%2==0|| array[i]%2==-0)
		{	even[count_even]=array[i];		
			++count_even;			}
		if(array[i]%2==1|| array[i]%2==-1)
		{	odd[count_odd]=array[i];
			++count_odd;	}
		if(array[i]%7==0 && array[i]!=0)
		{	sev[count_sev]=array[i];
			++count_sev;}
	}
	cout<<endl<<"There are "<<count_even<<" Even Numbers "<<endl;
	cout<<"There are "<<count_odd<<" odd Numbers "<<endl;
	cout<<"There are "<<count_sev<<" Numbers Divisble by Seven"<<endl;
	for(int i=0; i<1; i++)
	{	cout<<"Evens are "<<endl;
		for( i=0; i<count_even; i++)
		{	cout<<even[i]<<" ";	}
		cout<<endl<<"Odds are "<<endl;
		for( i=0; i<count_odd; i++)
		{	cout<<odd[i]<<" ";	}
		cout<<endl<<"Number Divisble by Seven are "<<endl;
		for( i=0; i<count_sev; i++)
		{	cout<<sev[i]<<" "; }
	}
	return 0;
}
//	Question Six Complete
//	Question seven
vowel()
{
	char st[100],arr[10]={'a','e','i','o','u','A','E','I','O','U'};	int j=1;
	cout<<"Enter the Character as many you can...the program will terminate when a vowel is entered "<<endl;
	for(int i=0; i<j; i++,j++)
	{
		cin>>arr[i];
		st[i]=arr[i];
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||
		   arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
		   {
		   	break;	goto kam;
		   }
	}	
	kam:
	cout<<endl<<"Printing Characters "<<endl;
	for(int i=0; i<j-1; i++)
	{
		cout<<st[i]<<" ";
	}
	return 0;
}
//	Question Seven complete
//	Question Eight
max()
{
	cout<<"Enter 10 Intergers "<<endl;
	int arr[10],lar=arr[0];
	for(int i=0; i<10; i++)
	{	
		cin>>arr[i];	
		if(arr[i]>lar)	
		{
			lar=arr[i];
		}
	}
	cout<<"Greatest Number is "<<lar<<endl;
	return 0;
}
//	Question Eight Complete
//	Question Nine
deletion()
{	
	string del;	char ch;	int store,enhance=0;	
	cout<<"Enter five Alphabets "<<endl;		getline(cin,del);
	cout<<"Enter The Character to be deleted "<<endl;		cin>>ch;
	store=del.length();
	string  stored[store];
	for(int i=0; i<store; i++)
	{	
		if(del[i]==ch)
		{	continue;}
		else 
		{	stored[enhance]=del[i];
			++enhance;
		}
	}
	for(int i=0; i<enhance; i++)
		cout<<stored[i];
	return 0;
}
//	Question Nine Complete
//	Question Ten
double sale_price(double purchase, double tax)
{
	cout<<"Purchase Price is "<<purchase<<" and tax amount is "<<tax<<endl;
	int tax_amount,price;
	tax_amount=purchase*(tax/100);
	price=purchase+tax_amount;
	return price;
	return 0;
}
eleventh()
{	string enter;	int size,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	cout<<"Enter the string and the program will say you the Number of vowels"<<endl;
	getline(cin,enter);
	size=enter.length();
	for(int i=0; i<size; i++)
	{
		if(enter[i]=='a'|| enter[i]=='A')
		{	++count_a;	}
		if(enter[i]=='e'|| enter[i]=='E')
		{	++count_e;	}		
		if(enter[i]=='i'|| enter[i]=='I')
		{	++count_i;	}
		if(enter[i]=='o'|| enter[i]=='O')
		{	++count_o;	}
		if(enter[i]=='u'|| enter[i]=='U')
		{	++count_u;	}
		
	}
	cout<<"There are "<<count_a<<" A in the Entered string "<<endl;
	cout<<"There are "<<count_e<<" E in the Entered string "<<endl;
	cout<<"There are "<<count_i<<" I in the Entered string "<<endl;
	cout<<"There are "<<count_o<<" O in the Entered string "<<endl;
	cout<<"There are "<<count_u<<" U in the Entered string "<<endl;
	
	return 0;
}
replace()
{	string enter,str;	int pos,n;
	cout<<"Enter a String "<<endl;
	getline(cin,enter);
	cout<<"Enter the Position of Word to be replaced"<<endl;
	cin>>pos;
	cout<<"Enter Number of Characters "<<endl;	cin>>n;
	cout<<"Enter the string to be replaced"<<endl;	
	cin>>str;
	--n;
	cout<<enter.replace(pos,n,str);
	return 0;
}

triger()
{	string chek,con; int size,count_words=1,count_low=0;
	string low[size];
	cout<<"Enter the String,the program will show you the...length,reverse,concatenate,counted words,lowecase"<<endl;
	getline(cin,chek);
	size=chek.length();
	cout<<endl<<"Length of string is "<<size<<endl;
	cout<<endl<<"String in Rervers Order "<<endl;
	for(int i=size-1; i>=0; i--)
	{	cout<<chek[i];	}
	cout<<endl<<"Concantenation...with hello world word "<<endl;
	
	con="Hello world ";
	cout<<chek+" "+con<<endl;
//	cout<<strcat(chek,con)<<endl;
	for(int i=0; i<size; i++)
	{
		if(chek[i]=='\0')
		{
			++count_words;
		}
	}
	cout<<endl<<"There are "<<count_words<<"words in string "<<endl;
	cout<<"String to lowercase "<<endl;
	for(int i=0; i<size; i++)
	{
		if(chek[i]>=97 && chek[i]<=122)
		{
				low[i]=chek[i-32];
				++count_low;
		}
	}
	for(int i=0; i<size; i++)
	{
		cout<<low[i];
	}
	return 0;
}