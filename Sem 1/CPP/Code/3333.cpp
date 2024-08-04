#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	/*
	string arr[]= {"Sagar"};
	char array[6]={'S','a','g','a','r','\0'};
	for(int i=0; i<1; i++)
	{
		cout<<arr[i]<<endl;
	}
	for(int i=0; i<6; i++)
	{
		cout<<array[i];
	}
	for(int i=5; i>=0; i--)
	{
		cout<<array[i];
	}
	*/
	
	/*if(0)
	cout<<"Sagar"<<endl;
	else 
	cout<<"Pare thii"<<endl;
	*/
	
	/*string ar[]={"Sagar","Aman","Qadeer","Talha"};
	cout<<"Enter the Number of String Between 0---3"<<endl;
	int num;
	cin>>num;
	cout<<ar[num];
	*/
	int count_pos=0,count_neg=0,count_zero=0,total=0;
	int check[12]={0,1,0,3,3,3,-4,5,-6,-7,7,9};
	int pos[10],neg[10],zero[10];
	for(int temp, i=0; i<12; i++)
	{
//		temp=check[i];
		if(check[i]==0)
		{
			++count_zero;
			zero[i]=check[i];
		}
		if(check[i]>0)
		{
			++count_pos;
			pos[i]=check[i];
		}
		if(check[i]<0)
		{
			++count_neg;
			neg[i]=check[i];
		}
		++total;
	}
	cout<<"There are "<<total<<" Numbers in an array "<<endl<<endl;
	for(int i=0; i<12; i++)
	{
		cout<<check[i]<<" ";
	}
	
	cout<<endl<<endl;
	cout<<"What type of Numbers do you want on screen positive(p) negative(n) or zero (z)"<<endl;
	char a;
	cin>>a;
	switch(a)
	{
		default : cout<<" Invalid Number"<<endl;
		case 'p':
		case 'P':cout<<"There are "<<count_pos<<" positive Numbers"<<endl;	
		for(int i=0; i<12; i++)
		{
			if(check[i]>0)
			cout<<pos[i]<<" ";
		}
		
		break;
		case 'n':
		case  'N':cout<<"There are "<<count_neg<<" negative Number"<<endl;	
		for(int i=0; i<12; i++)
		{
			if(check[i]<0)
			cout<<neg[i]<<" ";
		}
		break;
		
		case 'z':
		case 'Z':cout<<"There are "<<count_zero<<" zeros "<<endl;	
		for(int i=0; i<12; i++)
		{
			if(check[i]==0)
			cout<<zero[i]<<" ";
		}
		break;
		
	}
	
	
	
}
	