#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float y1,mf,x1;	char six=16;
	cout<<"Point-slope form "<<endl;
	cout<<"Forming a Linear equation with point-slope form "<<endl;
	cout<<"The general/standard formulae is "<<six<<" (y - y1) = m(x - x1) "<<endl;
	cout<<"Enter the y1 "<<endl;	cin>>y1;
	cout<<"Enter the m "<<endl;		cin>>mf;
	cout<<"Enter the x1 "<<endl;	cin>>x1;
	cout<<"Entered values  "<<six<<" y1 is "<<y1<<" m is "<<mf<<" x1 is "<<x1<<endl;
	// condition first (x>0 & y>0 & m>|=|< 0)	(2,3) m=<> 0
	if(y1>0 && x1>0 && mf>0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x"<<-x1<<") "<<endl;
	cout<<"y="<<mf<<"x"<<(mf*-x1)+(y1)<<endl;
	}
	else if(y1>0 && x1>0 && mf==0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x"<<-x1<<") "<<endl;
	cout<<" y="<<y1<<endl;
	}
	else if(y1>0 && x1>0 && mf<0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x+"<<(mf*-x1)+y1<<endl;
	}
	// condition second (x<0 & y>0 & m>|=|< 0)	(-2,3) m=<> 0
	else if(y1>0 && x1<0 && mf>0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x+"<<(mf*-x1)+y1<<endl;
	}
	else if(y1>0 && x1<0 && mf==0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<y1<<endl;
	}
	else if(y1>0 && x1<0 && mf<0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x"<<(mf*-x1)+y1<<endl;
	}
	//	condition third (x>0 & y<0 & m>|=|< 0)	(-2,3) m=<> 0
	else if(y1<0 && x1>0 && mf>0)
	{
	cout<<"After entering values equation is "<<six<<" (y+"<<-y1<<")="<<mf<<"(x"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x"<<(mf*-x1)+y1<<endl;
	}
	else if(y1<0 && x1>0 && mf==0)
	{
	cout<<"After entering values equation is "<<six<<" (y"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<y1<<endl;
	}
	else if(y1<0 && x1>0 && mf<0)
	{
	cout<<"After entering values equation is "<<six<<" (y+"<<-y1<<")="<<mf<<"(x-"<<x1<<") "<<endl;		
	cout<<"y="<<mf<<"x+"<<(mf*-x1)+y1<<endl;
	}
	// condition fourth (x<0 && y<0 && m<=> 0)
	else if(y1<0 && x1<0 && mf>0)
	{
	cout<<"After entering values equation is "<<six<<" (y+"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x+"<<(mf*-x1)+y1<<endl;
	}
	else if(y1<0 && x1<0 && mf==0)
	{
	cout<<"After entering values equation is "<<six<<" (y+"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<y1<<endl;
	}
	else if(y1<0 && x1<0 && mf<0)
	{
	cout<<"After entering values equation is "<<six<<" (y+"<<-y1<<")="<<mf<<"(x+"<<-x1<<") "<<endl;		
	cout<<"y="<<mf<<"x"<<(mf*-x1)+y1<<endl;
	}
	else 
	{
		cout<<"Invalid Input "<<endl;
	}
}