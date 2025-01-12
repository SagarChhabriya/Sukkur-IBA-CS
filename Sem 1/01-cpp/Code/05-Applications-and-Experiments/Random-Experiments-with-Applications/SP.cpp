#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float m,c;		char six=16;	int ch=six; 
	cout<<"\t\t\t Solving a Linear equation"<<endl;
	cout<<"\t\n Enter your Linear function"<<endl;
	cout<<"\t\n1.First of all make your linear equation in the slope-intercept form ( y = mx + c ) then Enter the Values "<<endl;
	cout<<"\t\n2.Enter first value  m (slope),then  value of c "<<endl;
	cin>>m;
	cout<<"Enter the Value of c "<<endl;	cin>>c;
	cout<<"Entered values  m is "<<m<<" and  c is "<<c<<endl;
	cout<<" y="<<m<<"x+"<<c<<" "<<six<<six<<" is the formed linear Eqaution in slope-intercept form"<<endl;
	cout<<" y-intercept is  "<<c<<" "<<six<<"(0 ,"<<c<<")"<<endl;
	cout<<" slope is  "<<m<<endl;
	cout<<setprecision(3);
	cout<<" x-intercept is  "<<-c/m<<" "<<six<<"("<<-c/m<<",0) "<<endl;
	
}