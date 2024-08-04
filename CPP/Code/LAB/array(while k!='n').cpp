#include <iostream>	
#include <unistd.h>	
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	
	cout<<"RADHE RADHE "<<endl;
//	int x[4]= {100, 200, 300, 400};	int a=3,m;
		/*for(int i=0; i<=3; i++)
		{	cout<<x[a]<<endl;		--a;		}
	cout<<"Enter the Value"<<endl;			cin>>m;
	switch(m)
	{	case 100: cout<<0<<endl;	break;
		case 200: cout<<1<<endl;	break;
		case 300: cout<<2<<endl;	break;
		case 400: cout<<3<<endl;	break;
		default:	cout<<"Entered Value is out of Range"<<endl;
	}*/
	int q[6]={10,20,30,40,50};		int count=0,k,num,times; 	
		cout<<"How Many times you Wanna Play ,Enter the Number "<<endl;
		cin>>num,times=num;
		if(num>0)
		{	
		for(int p=0; p!=num; p++)
		{		cout<<"Enter the Guessed Value "<<endl;		cin>>k;
		if(k==q[0]||k==q[1]||k==q[2]||k==q[3]||k==q[4])
		{	cout<<"You Won the Game"<<endl;}		
		else
		{	cout<<"You loss the Game"<<endl;}	count++;	
		cout<<"You have Played "<<count<<" times and remaining "<<--times<<" times "<<endl;
		} 	
		}
		else {	cout<<"You Entered Invalid Value "<<endl;}
		cout<<"You Played "<<count<<" times "<<endl;
		
}
