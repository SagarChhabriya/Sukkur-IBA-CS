#include <iostream>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	float sum=0,num,count=0; int limit;	
	cout<<"Enter the limit of numbers "<<endl;		cin>>limit;
	cout<<"Enter "<<limit<<" numbers "<<endl;
	while (count<limit)
	{
		cin>>num;
		sum=sum+num;
		count++;
	}
	cout<<"The average of "<<limit<<"numbers is "<<sum/count;
}