#include <iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t Making a Linear equation"<<endl;
	cout<<"\tEnter any two numbers then you will get a Linear function"<<endl;
	cout<<"\t first enter a number for m=slope,then a value for c "<<endl;
	float m,c;
	cin>>m>>c;
	cout<<"y="<<m<<"x+"<<c<<endl;
	cout<<"y-intercept is"<<c<<endl;
	cout<<"slope is"<<m<<endl;
	cout<<"x-intercept is"<<-c/m<<endl;
	
}