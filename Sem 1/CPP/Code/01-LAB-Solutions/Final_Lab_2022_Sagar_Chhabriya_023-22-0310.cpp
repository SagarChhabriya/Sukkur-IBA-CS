#include <iostream>
using namespace std;
int array_choice(),shapes(),deletion(),alpha(),sale_price(double,double),rep();
int main()
{
	int pur,tr,am;
//	array_choice();			//first function 
//	shapes();				//second function
//	deletion();				//third funciont 
//	alpha();				//fourth function 
//	fifth function starts
	cout<<"Enter Purchase Price "<<endl;		cin>>pur;	
	cout<<"Enter Tax Rate "<<endl;				cin>>tr;
	am=sale_price(pur,tr);
	cout<<"Tax On "<<pur<<" is "<<tr<<" and the Amount with tax is "<<am;
//	fifth function finish
	return 0;
}
array_choice()
{
	cout<<"RADHE RADHE "<<endl;
	int arr[10]={1,9,-8,0,3,5,-4,0,0,6};
	int pos[10],neg[10],odd[10],ev[10],zero[10];
	int count_pos=0,count_neg=0,count_odd=0,count_ev=0,count_zero=0;
	cout<<"Printing Array "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0; i<10; i++)
	{
		if(arr[i]>0)
		{
			pos[count_pos]=arr[i];
			++count_pos;
		}
		if(arr[i]<0)
		{
			neg[count_neg]=arr[i];
			++count_neg;
		}
		if(arr[i]==0)
		{
			zero[count_zero]=arr[i];
			++count_zero;
		}
		if(arr[i]%2==0 || arr[i]%2==-0)
		{
			ev[count_ev]=arr[i];
			++count_ev;
		}
		if(arr[i]%2==1 ||arr[i]%2==-1)
		{
			odd[count_odd]=arr[i];
			++count_odd;
		}
	}
	cout<<"There are "<<count_pos<<" positive Numbers "<<endl;
	cout<<"There are "<<count_neg<<" Negative Numbers "<<endl;
	cout<<"There are "<<count_odd<<" Odd Numbers "<<endl;
	cout<<"There are "<<count_ev<<" Even Numbers "<<endl;
	cout<<"There are "<<count_zero<<" Zero Numbers "<<endl;
	valid_choice:
	cout<<endl<<endl<<"What type of Numbers You Want to be Dislayed on The Screen "<<endl;
	cout<<"P--positve,  N--Negative  ,O--Odd,  E--Even,  Z--Zero"<<endl;
	char check;
	cin>>check;
	if(check=='n'||check=='N'||check=='E'||check=='e'||check=='o'||check=='O'||
		check=='z'||check=='Z'||check=='p'||check=='P')
	{			
	switch(check)
	{
		case 'p':
		case 'P': for(int i=0; i<count_pos; i++)
					{	cout<<pos[i]<<" ";				}	break;
		case 'o':
		case 'O':for(int i=0; i<count_odd; i++)
					{	cout<<odd[i]<<" ";				}	break;
		case 'E':
		case 'e': for(int i=0; i<count_ev; i++)
					{		cout<<ev[i]<<" ";			}	break;
		case 'z':
		case 'Z':for(int i=0; i<count_zero; i++)
					{	cout<<zero[i]<<" ";				} break;
		case  'n':
		case  'N': for(int i=0; i<count_zero; i++)
					{	cout<<neg[i]<<" ";				}	break; 
	
	}
	}
	else 
	{
		cout<<"\aYou Have Entered Invalid Choice "<<endl;
		goto valid_choice;
	}
}
shapes()
{
	for(int i=1; i<=6; i++)
	{
		for(int j=1; j<i; j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	cout<<"Printing Characters"<<endl;
	for(char a='A'; a<='E'; a++)
	{
		for(char b='A'; b<=a; b++)
		{
			cout<<b;
		}
		cout<<endl;
	}
}
deletion()
{
	cout<<"Enter Five Characters "<<endl;
	char fst[5],scd[4],d,cou=0;
	for(int i=0; i<5; i++)
	{
		cin>>fst[i];
	}
	cout<<"Enter the Character to Be delted"<<endl;
	cin>>d;
	for(int i=0; i<5; i++)
	{
		if(fst[i]==d)
		{
			continue;
		}
		
		else 
		{
			scd[cou]=fst[i];
			++cou;
		}
	}
	cout<<"After deletion"<<endl;
	for(int i=0; i<4; i++)
	{
		cout<<scd[i]<<" ";
	}
}
alpha()
{
	cout<<"Enter a String "<<endl;
	int size,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	string enter;
	getline(cin,enter);
	size=enter.length();
	for(int i=0; i<size; i++)
	{
		if(enter[i]=='a'||enter[i]=='A')
		{	++count_a; 	}
		if(enter[i]=='e'||enter[i]=='E')
		{	++count_e;	}
		if(enter[i]=='i'||enter[i]=='I')
		{	++count_i;	}	
		if(enter[i]=='o'||enter[i]=='O')
		{	++count_o;	}
		if(enter[i]=='u'||enter[i]=='U')
		{	++count_u;	}
	}
	cout<<"There are ( "<<count_a<<" )  A you have Entered  "<<endl;
	cout<<"There are ( "<<count_e<<" )  E you have Entered  "<<endl;
	cout<<"There are ( "<<count_i<<" )  I you have Entered  "<<endl;
	cout<<"There are ( "<<count_o<<" )  O you have Entered  "<<endl;
	cout<<"There are ( "<<count_u<<" )  U you have Entered  "<<endl;
}
sale_price(double purchase, double tax)
{
	int amount,sale_price;
	amount=purchase*(tax/100);
	sale_price=purchase+amount;
	return sale_price;
}
rep()
{	
	string change,scd;
	int pos,size;
	cout<<"Enter the String "<<endl;
	getline(cin,change);
	cout<<"Enter the Size of New String "<<endl;
	cin>>size;
	cout<<"Enter the String to Be replaced "<<endl;
	cin>>scd;
	cout<<"Enter the Position Where the scd string to be replaced "<<endl;
	cin>>pos;
	change.replace(pos,size,scd);
	
	
}
