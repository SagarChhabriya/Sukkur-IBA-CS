#include <iostream>
using namespace std;
int main()
{
	int a[7]={4,11,-5,2,4,0,0};	int count_neg=0, count_pos=0,count_zero=0,count_even=0,count_odd=0; 
	for(int i=0; i<=6; i++)
	{
	if(a[i]<0)
	{	cout<<"Negative "<<a[i]<<endl;		count_neg++;	}
	if(a[i]>0)
	{	cout<<"Positive "<<a[i]<<endl;		count_pos++;	}
	if(a[i]==0)
	{	cout<<"Zero "<<a[i]<<endl;			count_zero++;	}
	if(a[i]%2==0 && a[i]!=0) 
	{	cout<<"Even "<<a[i]<<endl;			count_even++;	}
	if(a[i]%2!=0)
	{	cout<<"Odd "<<a[i]<<endl;			count_odd++;	}
	}
	cout<<"\n-ve "<<count_neg<<endl;
	cout<<"\n+ve "<<count_pos<<endl;
	cout<<"\nzero "<<count_zero<<endl;
	cout<<"\nEven "<<count_even<<endl;
	cout<<"\nOdd "<<count_odd<<endl;
	
	
	
}
