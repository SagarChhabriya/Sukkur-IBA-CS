#include <iostream>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	const int sentinel=-99;	 float num,sum=0,count=0;
	cout<<"Enter integers ending with "<<sentinel<<endl;
	cin>>num;
	while (num!=sentinel)
	{
		sum=sum+num;
		count++;
		cin>>num;
	}
	cout<<"The sum of the "<<count<<" Numbers is "<<sum<<endl;
	if(count!=0)
	cout<<"The average is "<<sum/count<<endl;
	else 
	cout<<"No input "<<endl;
}