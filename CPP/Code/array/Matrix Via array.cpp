#include <iostream> 
using namespace std;
int main()
{
	cout<<"RADHE RADHE 	"<<endl;
	int sum=0,num=0,bum=0,fact=1;
//	int a[3][4]={{1,5,6,9},{3,2,7,8},{4,5,10,13}};
	int b[3][4]={{1,4,7,10},{2,5,8,11},{3,6,9,12}};
	int c[4][3]={{1,5,9},{2,6,10},{3,7,11},{4,8,12}};
	for(int i=0; i<1; i++)
	{
		for(int j=0; j<=3; j++)
		{
			sum=sum+b[i][j]*c[i++][j*0];
			bum=bum+b[i][j]*c[i++][--j];
			num=num+sum;
			fact=fact*j;
		}cout<<endl;	cout<<sum<<" sum in Mid "<<endl;	cout<<num<<" num in Mid"<<endl;		cout<<bum<<" bum in Mid"<<endl;
		 cout<<fact<<endl;
	}		cout<<num<<" Num Outer"<<endl;		cout<<sum<<" sum outer"<<endl;	cout<<bum<<" bum"<<endl;
	
	
	
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	
	/*for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<a[i][j]<<" ";
		}	cout<<endl;
	}*/
	cout<<"Matrix b"<<endl;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<b[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<"Matrix C"<<endl;
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<c[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"Matrix B * C"<<endl;
	cout<<b[0][0]<<" 1 "<<endl;	cout<<b[0][1]<<" 4 "<<endl;
	cout<<b[0][2]<<" 7 "<<endl;	cout<<b[0][3]<<" 10 "<<endl;
	cout<<"Matrix C "<<endl;
	cout<<c[0][0]<<" 1 "<<endl;	cout<<c[1][0]<<" 2 "<<endl;
	cout<<c[2][0]<<" 3 "<<endl;	cout<<c[3][0]<<" 4 "<<endl;
	
	

	
	for(int i=0; i<1; i++)
	{
		for(int j=0; j<=3; j++)
		{
			sum=sum+b[i][j]*c[i++][j*0];
			bum=bum+b[i][j]*c[i++][--j];
			num=num+sum;
		}cout<<endl;	cout<<sum<<" sum in Mid "<<endl;	cout<<num<<" num in Mid"<<endl;		cout<<bum<<" bum in Mid"<<endl;
	}	cout<<num<<" Num Outer"<<endl;		cout<<sum<<" sum outer"<<endl;	cout<<bum<<" bum"<<endl;
	

}