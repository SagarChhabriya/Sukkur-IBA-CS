#include <iostream>
#include <unistd.h>
#include <fstream>
#include <windows.h>
using namespace std;
 int main()
 {
 	HANDLE
	color=GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(color,78;
	 
	for(int i=0; i<=1000; i++)
	{
		SetConsoleTextAttribute(color,i);
		cout<<"RADHE RADHE "<<i<<endl<<endl;		
	}
	
// 	ofstream file;
//	file.open("k.txt",ios::app);
//	string name,fname,city;	int age,num;
//	cout<<"Enter Your Name"<<endl;				getline(cin,name);
//	file<<"User Name : "<<name<<endl;
//	cout<<"Enter Your Father's Name "<<endl;	getline(cin,fname);
//	file<<"Father's Name : "<<fname<<endl;
//	cout<<"Enter Your City's Name "<<endl;		cin>>city;
//	file<<"City "<<city<<endl;
//	cout<<"Enter Your Age "<<endl;				cin>>age;
//	file<<"Age : "<<age<<endl;
//	cout<<"Enter Your 4 Digit Number "<<endl;	cin>>num;
//	file<<"Number : "<<endl<<endl;
////	file<<name<<fname<<city<<age<<num;	
//	file.close();
//	sleep(2);
//	system("pause");
//	system("cls");
//	
//	
//	ifstream filer("k.txt");
//	string x;
//	while(getline(filer,x))
//	{
//		cout<<x<<endl;
//	}
//	filer.close();
 }
