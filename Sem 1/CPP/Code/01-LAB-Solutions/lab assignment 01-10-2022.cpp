#include <iostream>
using namespace std;
int main()
{
	//write a program in c++ ,which takes radius from the user and calculatre the area of sphere
	cout<<"Question one "<<endl;
	cout<<"Enter the Raduis of Sphere"<<endl;
	float area,r,pi=3.1416;
	cin>>r;
	area=4*pi*r*r;
	cout<<"Area of the sphere is "<<area<<endl;
	cout<<endl;
	//write a program in c++ that calculates zakar on any amount.The formula for zakat is
	//zakat=amount*0.025
	cout<<"\nQuestion second"<<endl;
	cout<<"Enter the amount which you have gained,and program will say you the amount of zakat"<<endl;
	float z,a;
	cin>>a;
	if(a>0)
	{
		z=a*0.025;
		cout<<"The amount of zakat is "<<z<<endl;
	}
	else 
	{
		cout<<"your entered value is -ve"<<endl;
	}
	cout<<endl;
	
	//write a program which prompts the user to enter his precentage in decimal number,the program decides,
	//grade on following criteria using multi way selection
	cout<<"\nQuestion No three,grading policy"<<endl;
	cout<<"Enter your Score between 0----100"<<endl;
	float s;
	cin>>s;
	if(s>=50 && s<60)
	{
		cout<<"Your grade is D Fail"<<endl;
	}
	else if(s>=60 && s<70)
	{
		cout<<"your Grade is C"<<endl;
	}
	else if(s>=70 && s<80)
	{
		cout<<"your Grade is B"<<endl;
	}
	else if (s>=80 && s<100 )
	{
		cout<<"Your Grade is A"<<endl;
	}
	else 
	{
		cout<<"Entered Value is Invalid"<<endl;
	}
	cout<<endl;
	//write a Program that prompts the user to input a number.The program should then output the number and a 
	//message saying whether the number is positive,negative,or zero along with that the odd & Even too.
	cout<<"\nQuestion No Four"<<endl;
	cout<<"Enter any Number,and program will say you whether it is even or odd"<<endl;
	int num;
	cin>>num;
	if(num%2==0 && num>0)
	{
		cout<<"your entered number "<<num<<" is even "<<endl;
	}
	else if(num%2==1 )
	{
		cout<<"your entered number "<<num<<" is odd"<<endl;
	}
	else if(0>num && num%2==0)
	{
		cout<<"your entered number "<<num<<" is -ve even"<<endl;
	}
	else if (num%2==-1 )
	{
		cout<<"your entered number "<<num<<" is -ve odd"<<endl;
	}
	else if(num==0)
	{
		cout<<"your entered number "<<num<<" is Zero"<<endl;
	}
	else 
	{
		cout<<"program is not responding"<<endl;
	}
	cout<<endl;
	//write a progarm that mimics a calculator.The program should take as input two integers and the operation
	//to be performed.it should then output the numbers,the operator,and the result.(for division,if the denominator
	//is zero,output an appropriate message.)some sample outputs follow:
	// 3+4=7     13*5=65
	cout<<"\nQuestion No five"<<endl;
	cout<<"Enter the two numbers and the symbol of arithimetic operation,program will give you solution"<<endl;
	cout<<"Enter the first operand"<<endl;
	int first,second;
	cin>>first;
	cout<<"Enter the symbol of arithmetic operation"<<endl;
	char ch;
	cin>>ch;
	cout<<"Enter the second operand"<<endl;
	cin>>second;
	if (ch=='/')
	{
		cout<<first/second;
	}
	else if(ch=='+')
	{
		cout<<first+second;
	}
	else if (ch=='-')
	{
		cout<<first-second;
	}
	else if(ch=='*')
	{
		cout<<first*second;
	}
	else 
	{
		cout<<"Entered operation is Invalid"<<endl;
	}
	cout<<endl;
	//write a c++ program that prompts the user to input three integer values and find the greteast value of the
	//three values 
	cout<<"\nQuestion No Six"<<endl;
	cout<<"Enter any three numbers,the program will give you the greatest one output"<<endl;
	float t,u,v;
	cout<<"Enter the first Number"<<endl;
	cin>>t; cout<<endl;
	cout<<"Enter the Second Nubmer"<<endl;
	cin>>u; cout<<endl;
	cout<<"Enter the third Number"<<endl;
	cin>>v; cout<<endl;
	if(t>u &&t>v)
	{
		cout<<"The greatest value is "<<t<<endl;
	}
	else if(u>v && u>t)
	{
		cout<<"The greatest value is "<<u<<endl;
	}
	else if(v>u && v>t)
	{
		cout<<"The greatest value is "<<v<<endl;
	}
	else 
	{
		cout<<"Sorry,program is not responding"<<endl;
	}
	cout<<endl;
	//write a c++ program to check whether a number is divisible by 5 and 11
	cout<<"\nQuestion No Seven"<<endl;
	cout<<"Enter any number(integer) and the program will say the number is divisible by 5 and 11 or not"<<endl;
	int  d;
	cin>>d; 
	if(d%5==0 && d%11==0)
	{
		cout<<"The entered value "<<d<<" is divisible by 5 and 11"<<endl;
	}
	else if(d%5==0)
	{
		cout<<"The entered value "<<d<<" is divisible by 5 and "<<d<<" is not divisible by 11"<<endl;
	}
	else if(d%11==0)
	{
		cout<<"The entered value "<<d<<" is divisible by 11 and "<<d<<" is not divisible by 5 "<<endl;
	}
	else 
	{
		cout<<"The entered value "<<d<<" is not divisible by 5 and 11"<<endl;
	}
	cout<<endl;
	//write a program to calculate and print the elecrivity bill of a given customer.
	//The customer ID,name and unit condumed by the user should be taken input form the
	//kryboard.Then,display the total amount to be paid by the customer .the unit charges
	//are to be charged as per the rules
	cout<<"\nQuestion No 8"<<endl;
	cout<<"\t\tNumber of units consumed			charge per unit"<<endl;
	cout<<"			1-199						5.Rs		"<<endl;
	cout<<"			200-399						10.Rs		"<<endl;
	cout<<"			400-599						15.Rs		"<<endl;
	cout<<"			600 or more					20.Rs		"<<endl;
	cout<<"\n\n\n"<<endl;
	cout<<"Enter your consumed units"<<endl;
	float units;
	cin>>units;
	if(units>=1 && units<200)
	{
		cout<<"your bill amount is "<<units*5<<endl;
	}
	else if(units>=200 && units<400)
	{
		cout<<"your bill amount is "<<units*10<<endl;
	}
	else if(units>=400 && units<600)
	{
		cout<<"your bill amount is "<<units*15<<endl;
	}
	else if(units>=600)
	{
		cout<<"your bill amount is "<<units*20<<endl;
	}
	else if(units=0)
	{
		cout<<"Enter the correct units, "<<units<<" is not correct"<<endl;
	}
	else 
	{
		cout<<"your Entered units are Invalid for further process"<<endl;
	}
	cout<<endl;
	//write a program that prompts the user to input three numbers.The program should
	//then output the numbers in ascending order
	cout<<"\nQuestion No 9"<<endl;
	cout<<"Enter any three Number the program will give output in ascending order "<<endl;
	float j,k,l;
	cout<<"\n\nEnter the first Number"<<endl;
	cin>>j;
	cout<<"Enter the Second Number"<<endl;
	cin>>k;
	cout<<"Enter the third Number"<<endl;
	cin>>l;
	if(j<k && j<l && k<l )
	{
		cout<<j<<" "<<k<<" "<<l<<endl;
	}
	else if(j<k && j<l && k>l)
	{
		cout<<j<<" "<<l<<" "<<k<<endl; 
	}
	else if(j>l && j<k && k>l)
	{
		cout<<l<<" "<<j<<" "<<k<<endl;
	}
	else if(j>k && j<l && l>k)
	{
		cout<<k<<" "<<j<<" "<<l<<endl;
	}
	else if(j>k && j>l && l>k )
	{
		cout<<k<<" "<<l<<" "<<j<<endl;
	}
	else if(j>k && j>l && k>l)
	{
		cout<<l<<" "<<k<<" "<<j<<endl;
	}
	else 
	{
		cout<<l<<" "<<k<<" "<<j<<" "<<endl;
	}
	cout<<endl;
	//write a program that asks the user to input any month number in integer(like 1,2...12)
	//an display the respective month name in the word(like january....December)
	cout<<"\nQuestion No Ten"<<endl;
	cout<<"Enter the Number of Month(1 to 12) and the program will give you the Name of Month"<<endl;
	int m;
	cin>>m;
	if(m==1)
	{
		cout<<"January"<<endl;
	}
	if(m==2)
	{
		cout<<"Febaruary"<<endl;
	}if(m==3)
	{
		cout<<"March"<<endl;
	}if(m==4)
	{
		cout<<"April"<<endl;
	}if(m==5)
	{
		cout<<"May"<<endl;
	}if(m==6)
	{
		cout<<"June"<<endl;
	}if(m==7)
	{
		cout<<"July"<<endl;
	}if(m==8)
	{
		cout<<"August"<<endl;
	}if(m==9)
	{
		cout<<"September"<<endl;
	}if(m==10)
	{
		cout<<"October"<<endl;
	}if(m==11)
	{
		cout<<"November"<<endl;
	}
	if(m==12)
	{
		cout<<"December"<<endl;
	}
	else 
	{
		cout<<"Please Enter the Number Between 1 and 12"<<endl;
	}
	cout<<endl;
	// Performing the Arithmetic Operators
	cout<<"\nQuestion No Eleven"<<endl;
	cout<<" 5 + 7 = "<<5 + 7 <<endl;
	cout<<" 3.7 + 8.0 = "<<3.7 + 8.0<<endl;
	cout<<" 5 + 8.0 = "<< 5 + 8.0 <<endl;
	cout<<" 5 - 7 = "<<5 - 7 <<endl;
	cout<<" 3.7 - 8.0 ="<<3.7 - 8.0<<endl;
	cout<<" 5 - 8.0 = "<<5 - 8.0 <<endl;
	cout<<" 5 * 7 = "<<5*7<<endl;
	cout<<" 3.7 * 8.0 = "<<3.7 * 8.0 <<endl;
	cout<<" 5 * 8.0 = "<<5 * 8.0<<endl;
	cout<<" 5 / 7 = "<<5/7<<endl;
	cout<<" 3.7 / 8.0 = "<<3.7 / 8.0 <<endl;
	
	//Write a c++ program that asks the user to input two number and tell
	//first is greater or second is greater or both are ==
	cout<<"\nQuestion No 12 "<<endl;
	cout<<"Enter any two Numbers and the program will say you which one is greater"<<endl;
	long double  f1,f2;
	cout<<"\n\nEnter the first Number"<<endl;
	cin>>f1;
	cout<<"Enter the Second Number"<<endl;
	cin>>f2;
	if(f1>f2)
	{
		cout<<f1<<" is greater than "<<f2<<endl;
	}
	else if(f2>f1)
	{
		cout<<f2<<" is greater than "<<f1<<endl;
	}
	else if(f2==f1)
	{
		cout<<f1<<" and "<<f2<<" both are equal numbers"<<endl;
	}
	else 
	{
		cout<<"Program is not responding"<<endl;
	}
	cout<<endl;
	//write a c++ program to convert temperature in Celsuis to Fahrenheit
	cout<<"\nQuestion No Thirteen "<<endl;
	cout<<"Enter the Celsius Temperature degree to convert into Fahrenheit temperature"<<endl;
	cout<<"\n\nEnter the Celsius temparature"<<endl;
	float cel,far;
	cin>>cel;
	far=(cel*1.8)+32;
	cout<<"Celsius Temparature "<<cel<<" converted ,Farhenheit Temparature is "<<far<<endl;
	
	//write a program in c++ to swap two numbers(using third variable and also without third variable)
	cout<<"\nQuestion No 14"<<endl;
	cout<<"Using Swap function"<<endl;
	long double r1,p2,q3;
	cout<<"Enter the first Number"<<endl;
	cin>>r1;
	cout<<"Enter the Second Number"<<endl;
	cin>>p2;
	q3=p2;
	p2=r1;
	r1=q3;
	cout<<r1<<" \n"<<endl;
	cout<<p2<<"\n"<<endl;

	//write a program to find out vowel and consonant
	cout<<"\nQuestion No 15"<<endl;
	cout<<"Enter any alphabet and program will say whether it is a vowel or consonant"<<endl;
	char ap;
	cin>>ap;
	if(ap=='a'||ap=='A'||ap=='e'||ap=='E'||ap=='i'||ap=='I'||ap=='O'||ap=='o'||ap=='u'||ap=='U')
	{
		cout<<"Vowel "<<endl;	
	}
	else 
	{
		cout<<"Consonant"<<endl;
	}
	cout<<endl;
	//write a program to find out the factorial of given number
	 int integer,fac=1;
	 cout<<"Enter the Number(integer) and the program will give you the factorial of the number"<<endl;	
	 cin>>integer;
	 for(int w=1;w<=integer;w++)
	 {
	 	fac=fac*w;
	 }
	 cout<<"Factorial = "<<fac<<endl;
	//write a c++ program to check whether a given input by user is a character as alphabet or not
	cout<<"\nQuestion No 17"<<endl;
	cout<<"Enter any charachter the program will say you whether it is an alphabet or not"<<endl;
	char al;
	cin>>al;
	if(al>='a' && al<='z')
	{
		cout<<al<<" is a alphabet in small abc"<<endl;
	}
	else if(al>='A' && al<='Z')
	{
		cout<<al<<" is a alphabet in Large ABC"<<endl;
	}
	else if(al=='`'||'~'||'!'||'@'||'#'||'$'||'%'||'^'||'&'||'*'||'()'||'-'||'_'||'='||'?'||'.'||',')
	{
		cout<<al<<" is  a special Character"<<endl;
	}
	else if(al=='-'||al=='/'||al=='+'||al=='*')
	{
		cout<<al<<" is an arithmetic operator"<<endl;
	}
	else if(al=='<'||'>'||'<='||'=<'||'>='||'=>')
	{
		cout<<al<<" is an relational operator"<<endl;
	}
	else 
	{
		cout<<" your entered key is not a character,may be it is a digit"<<endl;
	}
	cout<<endl;
	//write a c++ program to input basic salary of an employee and calculate its gross 
	//gross according to following:1-bs<=10000,hra=20%,da=80%,2-bs<=20000,hra=25%,da=90%
	cout<<"\nQuestion No 18"<<endl;
	cout<<"Enter your salary(between 1---20,000) and the program will say you your gross salary"<<endl;
	float pay,da,hra;
	cin>>pay;
	if(pay<=10000)
	{
		da=pay*0.8;
		hra=pay*0.2;
		cout<<da<<" is your 80% DA and "<<hra<<" is your 20% HRA and your Gross salary is "<<hra+da;
	}
	else if(pay<=20000)
	{
		da=pay*0.9;
		hra=pay*0.25;
		cout<<da<<" is your 90% DA and "<<hra<<" is your 25% HRA and your Gross salary is "<<hra+da;
		
	}	cout<<endl;
	//write a program that asks the user to enter the total square feet in a tract of
	//land and calculates the number of acres in the tract
	cout<<"\nQuestion No 19"<<endl;
	cout<<"Enter the Square feet of your land and the program will say you how many acres is your land"<<endl;
	float acres,acre=43560;
	cin>>acres;
	cout<<"your land is "<<acres/acre<<" acres"<<endl;
	
	//calculate the distance of a car with its speed
	cout<<"\nQuestion No 20"<<endl;
	cout<<"Enter the time(in hours) and program will say you that how many miles your car will travel at the speed of 70/mph"<<endl;
	float time;
	cin>>time;
	cout<<"your car will travel "<<time*70<<" miles  at the speed of 70/mph in "<<time<<" hours"<<endl;
	
	 
	 //write a program that asks the user how many cookies he or she wants to make ,
	 //then displays number of cups of each ingregient needed for the specified number
	 //of cookies ,if 48 cookies =sugar 1.5 kg,1kg of butter,2.75 kg of flour
	 cout<<"\nQuestion No 21"<<endl;
	 cout<<"Enter the quantity of cookies that you want and the program will say you that how much sugar,butter and flour is needed"<<endl;
	 float cookies,sugar,butter,flour;
	 int sug,but,flo;
	 cin>>cookies;
	 cout<<"for "<<cookies<<" cookies "<<endl;
	 sugar=cookies*31.25; butter=cookies*20.8; flour=cookies*57.2;
	 cout<<"Sugar :"<<sugar<<" grams"<<endl;
	 cout<<"butter:"<<butter<<" grams"<<endl;
	 cout<<"flour :"<<flour<<" grams"<<endl;
	 cout<<"\n\n Enter the amount of sugar,butter and of flour,program will say you total cost of cookies"<<endl;
	 cout<<"Entet the amount of sugar as per kg"<<endl;
	 cin>>sug;
	 cout<<"Enter the amount of butter as per kg"<<endl;
	 cin>>but;
	 cout<<"Enter the amount of flour as per kg"<<endl;
	 cin>>flo;
	 cout<<"sugar per kg "<<sug<<" ,Sugar amount : "<<(sug*sugar)/1000<<" rupees"<<endl;
	 cout<<"butter per kg "<<but<<" ,butter amount: "<<(but*butter)/1000<<" rupees"<<endl;
	 cout<<"flour per kg "<<flo<<" ,flour amount : "<<(flo*flour)/1000<<" rupees"<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 cout<<"\n RADHE RADHE  "<<endl;
	 
}