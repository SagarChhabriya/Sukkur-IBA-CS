#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;
int main()
{
//	1.bugs collected during five days
	char three=3,sixteen=16;
	int day=1,sum=0,bug,mnt=10,tum=0,month,amount,mon=1,budget;
	int	speed,hour,D,year,inch,inches=0,yearnum=1,days,psum=0,q,r,rsum=0,myear=1,msum=0,cm=1,yday;
	float mm=1.6,wam=8000,calories,pound=0.0002666667,calmonth,tcal,organ;
	
	cout<<three<<" RADHE RADHE "<<three<<endl;
	/*cout<<"Question No one "<<three<<" bug collector"<<endl;
	for(int i=1; i<=5; i++)
	{	cout<<"Enter the "<<day<<" day bugs "<<endl;
		cin>>bug;	day++;
		sum=sum+bug;
	}
	cout<<" total bugs are "<<sum<<endl;
	
//	2.Number of burned calories
	cout<<" Question No Two "<<endl;
	cout<<"Number of Burnded Calories "<<endl;
	for(int j=1; j<=5; j++)
	{	cout<<"Number of Calories Burned after "<<mnt<<" Minutes are "<<mnt*4.2<<endl;
		mnt+=5;	
	}	cout<<endl;
//	3.Budget Analysis
	cout<<"Question No three "<<endl;	
	cout<<"Enter the Amount of the Budget "<<endl;
	cin>>budget;									
	cout<<"Enter the Number of Months in which you have Spent your Money "<<endl;
	cin>>month;
	if(month>0)
	{
	for(int k=1; k<=month; k++)
	{
		cout<<"Enter the Amount of "<<mon<<" month "<<endl;	
		++mon;
		cin>>amount;
		tum+=amount;
	}
	budget-=tum;
	cout<<"Your Left amount is "<<budget<<endl;
	if(budget>=0 )
	{	cout<<"You are in Positive Range, Budget is Under "<<endl;	}
	else if(budget<0)
	{	cout<<"You are in Negative Range , Budget is over "<<endl;	}
	}
	else {	cout<<"Please Enter the Number of Month in the Positive Range"<<endl;}
	
//	4.Distance Traveled
	cout<<"Question No Four"<<endl;
	cout<<"Enter the Speed of the Vehicle mph"<<endl;		cin>>speed;
	cout<<"Enter the Number of Hours "<<endl;				cin>>hour;
	if(speed>0)
	{
	for(int l=0; hour!=0; l++)
	{	D=speed*hour;
		cout<<"Traveled Distance in "<<hour<<" hours is "<<D<<endl;
		--hour;
	}
	}
	else
	{	cout<<"your Entered Speed's Value is in -ve Range";	}
	
//	5.Average Rainfall
	cout<<"Question No Five "<<endl;
	cout<<"Enter the Number of Years "<<endl;				cin>>year;
	for( int n=1; n<=year; n++)
	{		cout<<yearnum<<" year "<<endl;
		for(int o=1; o<=12; o++)
		{
			cout<<"Enter the Rainfall inches of "<<o<<" Month "<<endl;
			cin>>inch;
			inches+=inch;
		}
	++yearnum;	
	}
	cout<<"Total years are "<<year<<" and total Months are "<<year*12<<endl;
	cout<<" Total Rainfall of Year is "<<inches<<" inches "<<endl;
	cout<<" The Averages Rainfall of Year is "<<inches/(year*12)<<endl;	
	
//	6.Pennies for pay
	cout<<"Question No Six "<<endl;
	cout<<"Enter the Number of Days "<<endl; 			cin>>days;
	for(int p=1; days!=0; p++)
	{	cout<<" day "<<p<<endl;
		psum=psum+days;		--days; 
	}
	cout<<"Total Sum is "<<psum<<endl;
	
//	7.Sum of Numbers
	cout<<"Question No Seven "<<endl;
	cout<<"Enter the Series of +ve Numbers "<<endl;
	q=1;
	cin>>r;
	while( r > 0 )
	{
		cout<<"Enter the Numbers "<<endl;
		cin>>r;
		rsum=rsum+r;
		cout<<"to finish the loop enter "<<sixteen<<" -1 "<<endl;
		q++;	++rsum;
	}
	cout<<"total sum is "<<rsum<<endl;
	
//	8.Ocean Levels
	cout<<"Question No Eight "<<endl;
	cout<<" The risen millimeters of Ocean "<<endl;
	for(int v=1; v<=25; v++)
	{		
		cout<<"The Ocean have risen "<<mm<<" in "<<myear<<" year "<<endl;	sleep(1);
		++myear;	mm=mm+1.6;
	}
//	10.Tution increase
	cout<<"Question No Ten "<<endl;
	for(int wyear=1, w=1; w<=5; w++)
	{	wam=(wam/100)*3+wam;
		cout<<"College tution fee Per Semester is $8000 ,it increases 3 percent Each Year "<<endl;
		cout<<"\nFee increased in "<<wyear<<" year  is "<<sixteen<<" "<<wam<<endl;
				++wyear; 
	}
//	11.Weight loss
	cout<<"Question No Eleven "<<endl;
	cout<<"Enter the Number of Calories which you can decrease in a day  "<<endl;
	cin>>calories;
	cout<<"Enter the Number of Months for Diet"<<endl;
	cin>>calmonth;
	for(int   x=1; x<=calmonth; x++ & ++cm)
	{	tcal=calories*pound*cm*30;	
		cout<<" decreasing "<<calories<<" calories on each day for "<<cm<<" Months  the loss weight is "<<tcal<<" Pound(s) "<<endl;
	}
//	12.
	cout<<"Question No twelewe"<<endl;
	cout<<"Enter the Number and the program will predict the approaximate size of a population of organisms "<<endl;
	cin>>organ;
	cout<<setw(10)<<"Day Approaximate "<<setw(10)<<" Population  "<<endl;
	for(int yday=1, y=1; y<=10; y++)
	{	organ=organ+30*(organ/100);
		cout<<left<<setw(5)<<"  "<<yday<<"               "<<left<<setw(20)<<organ<<endl;	
		++yday;	 
	}*/                                    
//	13.
	cout<<"Question No thirteen "<<endl;
	/*cout<<"Enter the Names of two Primary colors to mix "<<endl; sleep(1);
	string red="red",RED="RED",blue="blue",BLUE="BLUE",yellow="yellow",YELLOW="YELLOW";
	string color,rang;
	cout<<"Enter the First Color "<<endl;	
	getline(cin,color);
	cout<<"Enter the Second Number "<<endl;
	getline(cin,rang);
	if(color==red && rang==blue || color==blue && rang==red ||color==RED && rang==BLUE || color==BLUE && rang==RED )
	{		cout<<"you get Purple "<<endl;		}
	else if(color==red && rang=yellow || color==yellow && rand==red ||color==RED && rang=YELLOW || color==YELLOW && rang==RED)
	{	cout<<" you get organge "<<endl;	}	*/
	string name="pak",c,b="name",d;
	getline(cin,c);
	getline(cin,d);
	if(c==b && d==name) 
	{cout<<c;
	}
	else 
	cout<<"No";
	
	 
}