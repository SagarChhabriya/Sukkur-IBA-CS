#include <iostream>
#include <iomanip>
using namespace std;
//1.function prototypes of first question
int Add(int first ,int second),	Subtract(int first, int second),	
Multiply(int first, int second),	Divide(int first, int second),	
Square(int num),cube(int num);
//2.function prototypes of second Question
int Add(short over ,short load),		Subtract(short over,short load),
Multiply(short over,short load),		Divide(short over,short load),
Square(short onum),cube(short onum);
//intializing Global Varibles for perfoming operations and storing their result
int result,fst=9,over=9,sec=5,load=5,num=3,onum=3,is,value,max,min,temp=1,nump,rem,rev=0;;

//3.function prototype of ispalindrome
int palindrome(int number);
//4.Question No four prime number
int prim(int pri);
//Question No 6	factorial
int factorial(int num);
//Question No 7	maximum
int maximum(long double max,long double min);
long double mmax(long double a, long double b, long double c);
//Question No 8	minimum
int minimum(long double one, long double two );
int minimum(long double one, long double two , long double three);
//main function starts from here
int main()
{	
	float max,min;
//	Question No one (start) :-Six user defined functions
//	Starts designing stars with set manipulator
	cout<<setfill('*')<<setw(40)<<" "<<endl;
	cout<<"Question No one user defined functions "<<endl<<endl;
	cout<<setfill('*')<<setw(40)<<" "<<endl;
//	End of designing stars with set manipulator
	Add(fst,sec);		Subtract(fst,sec);		Multiply(fst,sec);
	Divide(fst,sec);	Square(num);			cube(num);
//	Question No one (end)

//	Question No two :- Six user defined functions overloading
	cout<<setfill('*')<<setw(50)<<" "<<endl;
	cout<<"Question No two user defined functions overloading "<<endl<<endl;
	cout<<setfill('*')<<setw(50)<<" "<<endl;
	Add(over,load);	Subtract(over,load);	Multiply(over,load);		
	Divide(over, over);	Square(onum);		cube(onum);
//	Question No two ends here
//	Question No 3 Palindrome
/*	cout<<"Question No three"<<endl;
	cout<<"Enter Number for Palindrome"<<endl;
	int pal;
	cin>>pal;
	cout<<palindrome(pal);
*/	

//	Question No six Factorial
	int facto;
	cout<<"Enter Number for Factorial"<<endl;
	cin>>facto;
	factorial(facto);
	
//	Question No Seven A
	long double m,n;
	cout<<"Enter Any two Numbers and the program will show you the Greater one"<<endl;
	cout<<"Enter the first one"<<endl; 	cin>>m;
	cout<<"Enter the Second one"<<endl;	cin>>n;	
	maximum(m,n);	
//	Question No Seven B
 
	 	
	cout<<"Enter Any three Numbers for Maiximum"<<endl;
	long double a,b,c,result;
	cin>>a>>b>>c;
	mmax(a,b,c);
	
	
//	Question No 8
//	Two Numbers for minimum
	cout<<"Enter any two Numbers for Minimum"<<endl;
	cout<<"Enter first Number"<<endl;
	cin>>a;
	cout<<"Enter Second Number"<<endl;
	cin>>b;
	result=minimum(a,b);
	cout<<result<<endl;
	cout<<minimum(a,b);
//	Three Numbers for minimum
	cout<<"Enter any three Numbers for Minimum"<<endl;
	cin>>a>>b>>c;
	cout<<minimum(a,b,c);
//	Question No Nine
	cout<<"Enter any Number for Prime Number"<<endl;
	int val;
	cin>>val;
	prim(val);
	return 0;
}
//main function ends here

//	first function
Add(int first, int second)
{	result=first+second;
	cout<<"Addition of two Numbers is "<<result<<endl<<endl;
	return result;
}
Subtract(int first, int second)
{	result=first-second;
	cout<<"Subtraction of two Numbers is "<<result<<endl<<endl;
	return result;
}
Multiply(int first,int second)
{	result=first*second;
	cout<<"Multiplication of two Numbers is "<<result<<endl<<endl;
	return result;
}
Divide(int first,int second)
{	result=first/second;
	cout<<"Division of two Numbers is "<<result<<endl<<endl;
	return result;
}
Square(int num)
{	result=num*num;
	cout<<"Square of "<<num<<" Numbers is "<<result<<endl<<endl;
	return result;
}
cube(int num)
{	result=num*num*num;
	cout<<"Cube of "<<num <<" Number is "<<result<<endl<<endl;
	return result;
}
//Qusetion No second funtion overloading
Add(short over, short load)
{	result=over+load;
	cout<<"Addition of two Numbers is "<<result<<" in  function overloading "<<endl<<endl;
	return result;
}
Subtract(short over, short load)
{	result=over-load;
	cout<<"difference of two Numbers is "<<result<<" in function overloading "<<endl<<endl;
	return result;
}
Multiply(short over ,short load)
{	result=over*load;
	cout<<"Product of two Numbers is "<<result<<" in function overloading "<<endl<<endl;
	return result;
}
Divide(short over, short load)
{	result=over/load;
	cout<<"Division of two Numbers is "<<result<<" in function overloading "<<endl<<endl;
	return result;
}
Square(short onum)
{	result=onum*onum;
	cout<<"Square of "<<onum<<" is "<<result<<" in function overloading"<<endl<<endl;
	return result;
}
cube(short onum)
{	result=onum*onum*onum;
	cout<<"Cube of "<<onum<<" is "<<result<<endl<<endl;
	return result;
}
//Question No 6
factorial(int num)
{	
		int fact=1;
	if (num > 0)
	{
	for(int i=num; i>0; i--)
	{	fact*=i;	}
	cout<<fact<<" is factorial of "<<num<<endl;			}
	else 
	cout<<"Your Enter value's Factorial is Not Findable"<<endl;
}
//Question No seven
maximum(long double x,long double y)
{	
	long double max;
	if(x>=y)
	max=x;
	else 
	max=y;
	cout<<max<<endl;	
	return		max;
}
long double mmax(long double a, long double b,long double c)
{	
	
	return maximum(a,maximum(b,c));
	
}
minimum(long double one, long double two)
{
	long double min;
	if(one>=two)
	min=two;
	else 
	min=one;
	return min;
}
minimum(long double one,long double two , long double three)
{	long double result;
	result=minimum(one,minimum(two,three));
	return result;
}
palindrome(int number)
{
	int nump,rem,rev=0;
	while(number!=0)	
	{
		rem=nump%10;
		rev=(rev*10)+rem;
		nump=nump/10;
	}
	cout<<rev<<" ";
	return 0;
}
prim(int pri)
{	
	for(int i=2; i<pri; i++)
	{
		if(pri%i==0)
		{
			temp=0;
		}
	}
	if(temp==1)
	{
		cout<<"Prime Number "<<endl;
	}
	else 
		cout<<" Not a Prime Number"<<endl;
}

