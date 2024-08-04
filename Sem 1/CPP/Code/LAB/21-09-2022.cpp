#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter your products price"<<endl;
	float milk,cake,lays,drink,cream,p,t,average;
	cout<<"Enter the amount of Milk"<<endl;
	cin>>milk;
	cout<<"Enter the amount of cake"<<endl;
	cin>>cake;
	cout<<"Enter the amount of Lays"<<endl;
	cin>>lays;
	cout<<"Enter the amount of drink"<<endl;
	cin>>drink;
	cout<<"Enter the amount of cream"<<endl;
	cin>>cream;
	p=(milk+cake+lays+drink+cream);
	cout<<endl;
	cout<<p<<"total amount"<<endl;
	t=p/4;
	cout<<t<<" is 25% tax"<<endl;
	cout<<t+p<<" total amount with tax"<<endl;
	average=p/5;
	cout<<average<<" average of each product"<<endl;
	
}
