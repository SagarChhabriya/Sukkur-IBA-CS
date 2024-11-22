#include <iostream>
#include <unistd.h>
using namespace std;
int check();
int main()
{	

	int in,check;		char im,heart=3,arrow=16;	
	cout<<heart<<" RADHE RADHE "<<heart<<endl;												sleep(1);
	cout<<"Program to check whether the input is character or not "<<endl;sleep(2);
	cout<<"How Many times you want to check"<<endl;sleep(2);
	mathy:
	cin>>check;
	if(check >0)
	{
	for(int i=0; i<check;i++)
	{
		cout<<"Enter any character ---not a string "<<endl;
		cin>>im;
		if(sizeof(im)==1)
		{		in=im;
			if(in >=0 && in <=32)
			{	cout<<in<<" Non printable character "<<im<<endl;	}
		else if(in >=33 && in <=47)
		{
			if(in==37|| in==42 || in==43 || in==45 || in==47)
			{	cout<<"it is a arithmetic operator "<<arrow<<im<<endl;	}
			else 
			{	cout<<"it is a special character "<<arrow<<im<<endl;		}
		}
			else if(in >=48 && in<=57)
			{	cout<<"it is a Number "<<arrow<<im<<endl;							}	
			else if(in>=58 && in<=64)
			{	cout<<"it is a special character "<<arrow<<endl;					}
			else if(in>= 65 && in<=90)
			{	cout<<"it  is a character and it belongs to Capital ABC "<<arrow<<im<<endl;	}
			else if(in>=91 && in<=96)
			{	cout<<"it is a special Character "<<arrow<<im<<endl; 				}
			else if(in>=97 && in<=122)
			{	cout<<"it is a Character and it belongs to  small abc "<<arrow<<im<<endl;	}
			if(in>=122 && in<=127 )
			{	cout<<"it is a Symbolical Character "<<arrow<<im<<endl;			}
	}
	}
	}
	else 
	{
		cout<<"Please Enter the Valid Value for process"<<endl;
		goto mathy;
	}
}