#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
//	Question No 1	Sum and product of an array
	cout<<"Question No ONE"<<endl;
	cout<<"Array x={2,3,5,1,4} "<<endl;
	int y[5]={2,3,5,1,4};
	int sum=0,pro=1;
	for(int i=0; i<5; i++)
	{
		sum=sum+y[i];
	}
	sleep(2);
	cout<<"Sum of array is "<<sum<<endl;		
	for(int i=0; i<5; i++)
	{
		pro=pro*y[i];
	}
	sleep(2);
	cout<<"Product of array is "<<pro<<endl;	
	
//	Question No 2
	cout<<"Question No TWO"<<endl;
	cout<<"Enter any five characters/Nnumbers/Special Symbols from keyboard for reverse order "<<endl;
	char ent,ent1,ent2,ent3,ent4,ent5;
	cin.get(ent);	ent1=ent;
	cin.get(ent);	ent2=ent;
	cin.get(ent);	ent3=ent;
	cin.get(ent);	ent4=ent;
	cin.get(ent); 	ent5=ent;
	cout<<ent5<<ent4<<ent3<<ent2<<ent1<<endl;
	
//Question No 3
	cout<<"Question No THREE"<<endl;
	sleep(1);
	cout<<"Enter any two Intergers "<<endl;	
	int first,second;
	cout<<"Enter first Interger "<<endl;	
	cin>>first;
	cout<<"Enter second Interger "<<endl;	sleep(1);
	cin>>second;
	if(first/second)
	{	cout<<first<<" and "<<second<<" are equal "<<endl;}
	else 
	{	cout<<first<<" and "<<second<<" are not equal "<<endl;}
	sleep(2);

	//Question No 4 
	cout<<"Question No 4 "<<endl;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int k=8; k>0; k--)
	{
		for(int l=1; l>8; l++)
		{
			cout<<" * ";
		}	cout<<endl;
	}
	cout<<endl;	
	sleep(2);
//	Question No 5	factorial program
	cout<<"Question No 5 "<<endl;
	cout<<"Enter the Number for Factorial "<<endl;
	int num,fact=1;
	up:
	cin>>num;
	if(num>0)
	{
	for(int i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"The factorial of "<<num<<"!"<<" is "<<fact;
	}
	else 
	{	cout<<"\aPlease Enter a Valid Value"<<endl;
		goto up;		}
	cout<<endl;
	sleep(2);
//Question No 6
	cout<<"Question No 6 "<<endl;
	int x[7]={200,24,33,50,11,4,10};
	int largest=x[0]; 
	int smallest=x[0];
	for(int i=0; i<7; i++)
	{
		if(x[i]>largest)
		{
			largest=x[i];
		}
		if(x[i]<smallest)
		{
			smallest=x[i];
		}
	}
		cout<<"Finding the Smallest and largest Number of an array"<<endl;
		cout<<"Larger "<<largest<<" Smaller is "<<smallest<<endl;
	cout<<endl;
	sleep(2);
//Quesiton No 7	
	cout<<"Question No 7 , Using Switch Case "<<endl;
	cout<<"Enter any Number for analysis "<<endl;
	int	checker;
	cin>>checker;
	switch(checker>0)
	{	case 1: cout<<"Entered Value is positive "<<endl;	}
	switch(checker<0)
	{	case 1:	cout<<"Entered Value is Negative "<<endl;	}
	switch(checker==0)
	{	case 1: cout<<"Entered Value is equal to 0"<<endl;	}


//	Question No 8
	cout<<"Question No 8	"<<endl;
	cout<<"Number is Divisible by 7 ,9 and 11 & 13 "<<endl;
	int div;
	cin>>div;
	if(div%7==0)
	{	cout<<div<<" is Divisible By 7 "<<endl; 	}
	if(div%9==0)
	{	cout<<div<<" is Divisble By 9 "<<endl; 		}
	if(div%11==0)
	{	cout<<div<<" is Divisble By 11 "<<endl; 	}
	if(div%13==0)
	{	cout<<div<<" is Divisble By 9 "<<endl; 		}
	if(div%7!=0 && div%9!=0 && div%11!=0 && div%13!=0)
	{	cout<<"Not divisble by Given Numbers "<<endl;}
	
	cout<<endl;
	sleep(2);

//	Question No 09
	cout<<"Quetion No 9 "<<endl;
	cout<<"Here are the Even Numbers between 3 to 33"<<endl;
	for(int i=3; i<34; i++)
	{	
		if(i%2==1)
		{
			continue;
		}
		cout<<i<<endl;
	}
	cout<<endl;
	sleep(2);
	*/
//	Quesiton No 10
	cout<<"Question No 10 "<<endl;
	double pos,jod=0;
	while(pos>=0)
	{
		cout<<"Enter as much +ve Numbers as You can "<<endl;
		cin>>pos;
		jod=jod+pos;	
	}



}