#include <iostream>
using namespace std;
int main()
{
	cout<<"Writing a program in c++ to print day of week name using switch case"<<endl;
	cout<<"\n Enter the first letter of the day which you want"<<endl;
	char a;
	cin>>a;
	
	{
	switch (a)
	{
		cout<<"Enter the first three digits of a day"<<endl;
		case 'M':
			cout<<"Monday = Som waar"<<endl;
			break;
		case 'T':
			cout<<"Tuesday = Mangal Waar"<<endl;
			break;
		case 'W':
			cout<<"Wednesday = Budh waar"<<endl;
			break;
		case 't':
			cout<<"Thursday = Guru waar"<<endl;
			break;
		case 'F':
			cout<<"Friday = Shukar waar"<<endl;
			break;
		case 'S':
			cout<<"Saturday = Shani waar"<<endl;
		case 's':
			cout<<"Sunday = Itt waar"<<endl;
			break;
		default:
			cout<<"Out of week days"<<endl;
	}
}
}