#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	float a,h,k,s,s1,t,t1,u,u1,v,v1,sol,solu,y,y1,yint,yint1;			char three=16;
	cout<<"RADHE RADHE "<<endl;
	/*cout<<"First of Make your Absolute Function's Equatin in the form Y=a|x-h|+k"<<endl; sleep(2);
	cout<<"Ex:- if your Equation is Y=|x-3|-1,then put a=1,h=-3 and k=-1 "<<endl;	sleep(1);
	cout<<"Else if your Equation is like Y=2|x-3|-1,then Enter a=2,h=-3,k=-1"<<endl;	sleep(1);
	cout<<"Else if your Equation is like Y=(|x-3|/5)-1 ,then enter a=1/5, h=-3, k=-1"<<endl;
	sleep(2);
	cout<<"Now Enter the Values of a,h and of k respectively"<<endl;
	sleep(2);*/
	cout<<"Now Enter the value of a"<<endl;		cin>>a;
	cout<<"Now Enter the value of h"<<endl;		cin>>h;
	cout<<"Now Enter the value of k"<<endl;		cin>>k;
	yint=(h+k);	yint1=(-h+k); s=-(k+h);	s1=-(-k+h);	u=(k-h);	u1=(-k-h);
	//s=-(h+k); s1=(h-k);	v=(-h-k); v1=(-h+k); t=(h+k); t1=(-h+k);	u=(-h-k); u1=(-h+k);	   
	if(h>0 && k>0 )
	{	cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint<<" "<<three<<" ( 0 , "<<yint<<" )"<<endl;
	}
	else if(h<0 && k<0 )
	{	cout<<" X-intercepts are "<<s<<" and "<<s1<<" "<<three<<" ( "<<s<<" , 0 ) "<<" ( "<<s1<<" , 0 ) "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint1<<" "<<three<<" ( 0 , "<<yint1<<" )"<<endl;
	}
	else if(h>0 && k<0 )	
	{	cout<<"X-intercepts are "<<u<<" and "<<u1<<" "<<three<<" ( "<<u<<" , 0 ) "<<" ( "<<u1<<" , 0 ) "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint<<" "<<three<<" ( 0 , "<<yint<<" )"<<endl;
	}
	else if(h<0 && k>0 && h!=k)
	{	cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint1<<" "<<three<<" ( 0 , "<<yint1<<" )"<<endl;
	}
	else if(h<k && k>0 && h==0)
	{	cout<<"No X-intercepts  , imaginary roots "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint<<" "<<three<<" ( 0 , "<<yint<<" )"<<endl;
	}
	else if(h>k && k<0 && h==0)
	{	cout<<"X-intercepts are "<<k<<" and "<<-k<<" "<<three<<" ( "<<k<<" , 0 ) "<<" ( "<<-k<<" , 0 ) "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint<<" "<<three<<" ( 0 , "<<yint<<" )"<<endl;
	}
	else if(h>0 && h>k && k==0)
	{	cout<<"X-intercepts are "<<-h<<" and "<<-h<<" "<<three<<" ( "<<-h<<" , 0 ) "<<" ( "<<-h<<" , 0 ) "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" , "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint<<" "<<three<<" ( 0 , "<<yint<<" )"<<endl;
	}
	else if(h<0 && h<k && k==0)
	{	cout<<"X-intercepts are "<<-h<<" and "<<-h<<" "<<three<<" ( "<<-h<<" , 0 ) "<<" ( "<<-h<<" , 0 ) "<<endl;
		cout<<"vertex "<<three<<"  ( "<<-h<<" ,0 "<<k<<" )"<<endl;
		cout<<"Y-intercept is "<<yint1<<" "<<three<<" ( 0 , "<<yint1<<" )"<<endl;
	}
	
	/*k=(-h+(-k)); 	s=(-h-k);	y=(h+k);	y1=-h+k;
	cout<<k<<" and "<<s<<endl;	xcvbnm,./\\0.987456321/**-*-	
	cout<<"Vertex is ( "<<-h<<" , "<<k<<" ) "<<endl;
	if(h>0)
	{	cout<<"Y-intercept is "<<y<<" "<<three<<"( 0 , "<<y<<" )"<<endl;		}
	else if(h<0)
	{	cout<<" Y-intercept is  "<<y1<<" "<<three<<"( 0 , "<<y1<<" )"<<endl;	}
	else if(h==0)
	{	cout<<"Y-intercept is "<<k<<" "<<three<<" ( 0 , "<<k<<" )"<<endl;}
	cout<<"h+k "<<(h+(k))<<endl;*/
}