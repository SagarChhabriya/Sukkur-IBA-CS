#include <iostream>
using namespace std;
int main()
{
	cout<<"Writing a program in c++ to print day of week name using switch case"<<endl;
	cout<<"\n Enter the Numbers between one and seven"<<endl;
	int a;
	cin>>a;
	switch (a)
	{
		case 1:
			cout<<"Monday = Som waar"<<endl;
			break;
		case 2:
			cout<<"Tuesday = Mangal Waar"<<endl;
			break;
		case 3:
			cout<<"Wednesday = Budh waar"<<endl;
			break;
		case 4:
			cout<<"Thursday = Guru waar"<<endl;
			break;
		case 5:
			cout<<"Friday = Shukar waar"<<endl;
			break;
		case 6:
			cout<<"Saturday = Shani waar"<<endl;
		case 7:
			cout<<"Sunday = Itt waar"<<endl;
			break;
		default:
			cout<<"Out week days"<<endl;
	}
}