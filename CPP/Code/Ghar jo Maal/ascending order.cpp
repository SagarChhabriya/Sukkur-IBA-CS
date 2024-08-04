#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter any three numbers then program will give you in ascending order"<<endl;
	float a,b,c;
	cin>>a; cout<<endl; cin>>b; cout<<endl; cin>>c; cout<<endl;
	if(a>b && a>c && b>c)
	{
	 	cout<<c<<" "<<b<<" "<<a;
	}
	else if(b>a && b>c && a>c)
	{
	 	cout<<c<<" "<<a<<" "<<b;
	}
	else if(c>a && c>b && b<a)
	{ 
		cout<<b<<" "<<a<<" "<<c;
	}
	else if(b>a && b>c && a<c)
	{
		cout<<a<<" "<<c<<" "<<b;
	}
	else if(b>a && b>c && c>a)
	{
		cout<<b<<" "<<c<<" "<<a;
	}
	else if(a>b && a>c && c>b)
	{
		cout<<b<<" "<<c<<" "<<a;
	}
	else if (c>a && c>b && a<b)
	{
		cout<<a<<" "<<b<<" "<<c;
	}
	else 
	{
		cout<<"Program is not responding"<<endl;
	}
}