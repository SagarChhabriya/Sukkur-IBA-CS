#include <iostream>
using namespace std;
int main()
{
	int sum=0,neg_count,pos_count,equal;
	int x[3] ={ 10,20,30 } ;	int z[6] = {-10,3,0,5,-4,2};
	int y[3] ={ 1,2,3 };
	char ch[5] = {'a','e','i','o','u'};
	char mh[5] = {'A','E','I','O','U'};
	/*for(int m=0; m<3; m++)
	{	cout<<"Negative "<<endl;
		cout<<x[m]-y[m]<<endl;
		cout<<"Positive"<<endl;
		cout<<x[m]+y[m]<<endl;
	}	
	
	for(int n=0; n<5; n++)
	{
		cout<<ch[n]<<" "<<mh[n]<<endl;
	}*/
	/*for(int i=0; i<=5; i++)
	{
		if(z[i]>0)
		{	cout<<"positive "<<z[i]<<endl;}
		else if(z[i]<0)
		{	cout<<"Negative "<<z[i]<<endl;}
		else if(z[i]==0)
		{	cout<<"Eqaul to Zero "<<z[i]<<endl;}
	}*/
	for(int i=0; i<=5; i++)
	{	
		if(z[i]<0)
		neg_count++;
	}
	cout<<neg_count<<endl;
	for(int i=0; i<=5; i++)
	{
		
		if(z[i]>0)
		pos_count++;
	}
	cout<<pos_count++<<endl;
	for(int i=0; i<=5; i++)
	{
		if(z[i]==0)
		equal++;
	}
	cout<<equal;
	/*for(int i=0; i<=10; i++)
	{
		cout<<ch[i];
	}*/
}
