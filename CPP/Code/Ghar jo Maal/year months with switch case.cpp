#include <iostream>
using namespace std;
int main()
{
	cout<<"Writing a program in c++ to print the months of year with switch case"<<endl;
	cout<<"\n Enter the number of month which you want,between 1 and 12"<<endl;
	int a;
	cin>>a;
	
	if(a==1||2||3||4||5||6||7||8||9||10||11||12){
	switch (a)
	{
		cout<<"Entered number of month"<<a<<endl;
		case 1:
			cout<<"January"<<endl;
			break;
		case 2:
			cout<<"Febaruary"<<endl;
			break;
		case 3:
			cout<<"March"<<endl;
			break;
		case 4:
			cout<<"April"<<endl;
			break;
		case 5:
			cout<<"May"<<endl;
			break;
		case 6:
			cout<<"June"<<endl;
		case 7:
			cout<<"July"<<endl;
			break;
		case 8:
			cout<<"August"<<endl;
			break;
		case 9:
			cout<<"September"<<endl;
			break;
		case 10:
			cout<<"October"<<endl;
			break;
		case 11:
			cout<<"November"<<endl;
			break;
		case 12:
			cout<<"December"<<endl;
			break;
			cout<<"Out of month's numbers"<<endl;
	}
}
	else{
		cout<<a<<" is out of given range"<<endl;
	}
}