#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	cout<<"Enter the Name of the student "<<endl;
	string name,id;	int grade,eng,pre,ict,pak,eth,pro;			getline(cin,name);
	cout<<"Enter the CMS-ID of the Student "<<endl;				getline(cin,id);
	cout<<"Enter the Marks of English "<<endl;					cin>>eng;
	cout<<"Enter the Marks of Pre_Calculas "<<endl;				cin>>pre;
	cout<<"Enter the Marks of ICT "<<endl;						cin>>ict;
	cout<<"Enter the Marks of Pakistan Studies"<<endl;			cin>>pak;
	cout<<"Enter the Marks of Ethics"<<endl;					cin>>eth;
	cout<<"Enter the Marks of Programming Fundamental"<<endl;	cin>>pro;

	cout<<setw(20)<<"Name:"<<name<<" "<<setw(20)<<" CMS-ID:"<<id<<" "<<setw(20)<<endl;	
	cout<<setw(25)<<"Marks"<<setw(20)<<"Grade "<<setw(20)<<" CGPA "<<endl;
	cout<<"English"<<setw(15)<<eng<<setw(10)<<grade<<endl;
	cout<<setw(10)<<"Pre-Calculas"<<setw(10)<<pre<<endl;
	cout<<"ICT"<<setw(19)<<ict<<endl;
	cout<<setw(10)<<"Pak Studies"<<setw(11)<<pak<<endl;
	cout<<"Ethics"<<setw(16)<<eth<<endl;
	cout<<setw(10)<<"P.Fundamental"<<setw(9)<<pro<<endl;
	
	}