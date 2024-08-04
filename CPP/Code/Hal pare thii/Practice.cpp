#include <iostream>
using namespace std;
int main()
{
	cout<<"\t\t\tLinear equation Solution"<<endl;
	cout<<"\n\tFisrt of all make a linear equation in form:y=mx+c on your notebook"<<endl;
	cout<<"\n\tWhere c is y-intercept,m is slope and x-intercept is x=-c/m"<<endl;
	float x,y,c,m;
	cout<<"\n\tfirst of all finding the y-intercept,means x=0"<<endl;
	cout<<"\n\tEx:- taking a linear equation  y=5x+10"<<endl;
	cout<<"\n\tHere,y-intercept is 10,m is 5,x-intercept is x=-10/5"<<endl;
	cout<<"\n\tfirst of all,put x=0,then put the value of c"<<endl;
	cin>>x;
	cout<<"\n\t Now Enter the value of c"<<endl;
	cin>>c;
	cout<<"\n\ty-intercept is "<<m*x+c<<endl;
	cout<<"\n\tNow put the value of m,means slope"<<endl;
	cin>>m;
	cout<<"\tx="<<-c/m<<endl;
	cout<<"\tx-intercept is"<<-c/m<<endl;
	
	
	
}