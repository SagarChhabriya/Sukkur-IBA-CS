#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"Enter your Name in horizontal and the program will give you output in vertical"<<endl;
	cout<<"Enter the numbers of your name (3-11)"<<endl;
	int a;char ch,three=3;
	cin>>a;
	switch(a)
	{
		case 3:cout<<"Enter your three digit Name"<<endl;
		cin.get(ch);	cout<<ch<<endl;	cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl; cin.get(ch);	cout<<ch<<endl; break;
		case 4:cout<<"Enter your Four digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; break;
		case 5:cout<<"Enter your five digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; break;
		case 6:cout<<"Enter your six digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl; break;
		case 7:cout<<"Enter your Seven digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	break;
		case 8:cout<<"Enter your Eight digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;	break;
		case 9:cout<<"Enter your Nine digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		break;
		case 10:cout<<"Enter your Ten digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl;	break;
		case 11:cout<<"Enter your Eleven digit Name "<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;	
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl; 	cin.get(ch);	cout<<ch<<endl; 
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		cin.get(ch);	cout<<ch<<endl;		cin.get(ch);	cout<<ch<<endl;
		break;

		default: cout<<three<<" RADHE RADHE "<<three<<endl;
	}
}