#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	int x,y;	char six=16;
	cout<<"Enter the Values like "<<six<<"( x , y ) "<<endl; sleep(1);
	cout<<"Enter the value of x "<<endl;	cin>>x;
	cout<<"Enter the value of y "<<endl;	cin>>y;
	if(x==0 && y==0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies on origin "<<endl;	}
	if(x>0 && y>0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies in Quadrant one "<<endl;	}
	if(x>0 && y<0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies in Quadrant four "<<endl;	}
	if(x<0 && y<0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies in Quadrant three "<<endl;	}
	if(x<0 && y>0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies in Quadrant two "<<endl;	}
	if(x==0 && y>0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies on +ve y-axis "<<endl;	}
	if(x==0 && y<0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies on -ve y-axis "<<endl;	}
	if(x>0 && y==0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies on +ve x-axis "<<endl;	}
	if(x<0 && y==0)
	{	cout<<"( "<<x<<" , "<<y<<" ) lies on -ve x-axis "<<endl;	}

	}
