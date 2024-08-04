
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,s,sl,sol,solu,s1,sl1,sol1,solu1,vert,ver,x,y,z; char ch,side=16,down=31,three=3;
	cout<<three<<"  RADHE RADHE  "<<three<<endl;
	cout<<"  Namastey  "<<endl;
	cout<<" Solution of Quadratic Equation, make your equation in the standard form ax^2+bx+c=0"<<endl;
	cout<<"Now put the values one by one a,b and c "<<endl;
	cout<<"Enter the value of a "<<endl;cin>>a;
	cout<<"\a Enter the value of b"<<endl;cin>>b;
	cout<<"\a Enter the value of c"<<endl;cin>>c;
	cout<<"\a Enter + or  - for the roots of a Quadratic equation "<<endl;cin>>ch;
	
	s=b*b-4*a*c;	sl=pow(s,0.5);	sol=(-b-sl)/(2*a);	solu=sol;
	s1=b*b-4*a*c;	sl1=pow(s1,0.5);	sol1=(-b+sl1)/(2*a);	solu1=sol1;
	
	switch(ch=='+'||ch=='-')
	{	case 1:cout<<solu<<endl;
		case 2:cout<<solu1<<endl;break;
		default:cout<<" Sabar na Kajai"<<endl;break;	}	

	cout<<side<<"Y-intercept is "<<c<<"  "<<side<<side<<" ( 0 , "<<c<<" ) "<<endl;
	cout<<down<<down<<"x-intercepts are "<<endl;
	if(solu == solu1 && (solu !=0 && solu1!=0))
	{	cout<<"( x , y ) "<<side<<side<<" ( "<<solu<<" , 0 ) "<<" ( "<<solu1<<" , 0 )  "<<solu<<"  is equal to  "<<solu1<<" two equal real roots (one intersection point )"<<endl;}
	else if(solu!=solu1 && (solu !=0 && solu1!=0))
	{	cout<<"( x , y )"<<side<<side<<" ( "<<solu<<" , 0 )"<<" ( "<<solu1<<" , 0 )  "<<solu<<"  is != to "<<solu1<<" two distinct real roots (two intersection points) "<<endl;}
	else if(solu==0 && solu1==0)
	{	cout<<"( x , y )"<<side<<side<<" ( "<<solu<<" , 0 )"<<" ( "<<solu1<<" , 0 )  "<<solu<<"  is != to "<<solu1<<" No real roots"<<endl;}
	else if(solu!=solu1 && (0>s && 0>s1))
	{	cout<<solu<<" and "<<solu<<" are not real roots (No intersection point)"<<endl;	}
	else {	cout<<"The roots are Complex"<<endl;}
	
	if(b*b-4*a*c>0)
	{	cout<<side<<"\n Discrimnant is greater than Zero"<<endl;}
	else if(b*b-4*a*c==0)
	{	cout<<side<<"\n Discrimnant is Equal to zero "<<endl;}
	else if(b*b-4*a*c<0)
	{	cout<<side<<"\n Discrimnant is less than zero "<<endl;}
 	
	 vert=-b/(2*a);
 	ver=a*vert*vert+b*vert+c;
 	cout<<down<<" axis of symetery or vertex "<<endl;
 	cout<<side<<side<<"("<<vert<<" , "<<ver<<" )"<<endl;
 	
 }
 
