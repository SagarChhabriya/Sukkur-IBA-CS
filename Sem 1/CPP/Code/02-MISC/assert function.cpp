#include <iostream>
#include <cassert>
using namespace std;
int main()
{
	cout<<"Enter any two Numbers"<<endl;
	int a,b,c;
	cout<<"Enter the first Number"<<endl;
	cin>>a;
	cout<<"Enter the second Number"<<endl;
	cin>>b;
	assert(b);
	c=a/b;
	cout<<c;
}