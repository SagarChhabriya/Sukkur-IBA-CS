#include <iostream>
using namespace std;
int main()
{
	cout<<"Mid Point Solution "<<endl;
	double ax1,ax2,yi1,yi2,sx,sy;	char six=16;
	cout<<"Enter the x2 and x1 Respectively"<<endl;
	cin>>ax2>>ax1;
	cout<<"Enter the y2 and y1 Respectively "<<endl;
	cin>>yi2>>yi1;
	sx=(ax2+ax1)/2;	sy=(yi2+yi1)/2;
	cout<<"x="<<sx<<" "<<six<<" y="<<sy<<endl;
	cout<<"Mid Point "<<six<<" ( "<<sx<<" , "<<sy<<" )"<<endl;
}