#include <iostream>
using namespace std;
int main()
{
	/*cout<<"Enter your value"<<endl;
	int a;
	cin>>a;
	if (a>0 && a%2==0)
	{
		cout<<" your value is even positive"<<endl;
	}
	else if(a==0)
	{
		cout<<"you have entered zero"<<endl;
	}
	else if (a<0 && a%2==0)
	{
		cout<<"your value is Even and negative"<<endl;
	}
	else if(a<0 && a%2!=0)
	{
		cout<<"you have entered odd negative"<<endl;
	}
	else
	{
		cout<<"your value is odd"<<endl;
	}*/
	cout<<"Enter any three values for comparison"<<endl;
	float a,b,c;
	cin>>a>>b>>c;
	if (a>b&&a>c)
	{
		cout<<a<<" is greater than "<<b<<" and "<<c<<endl;
	}
	else if (b>a && b>c)
	{
		cout<<b<<" is greater than "<<a<<" and "<<c<<endl;
	}
	else if(c>a && c>b)
	{
		cout<<c<<" is greater than "<<a<<" and "<<b<<endl;		
	}
	else 
	{
		cout<<"your value is invalid"<<endl;
	}
}
