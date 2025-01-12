#include <iostream>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	cout<<"Matrix A"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<"Matrix B"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<b[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<"Matrix A + B"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]+b[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<" B + A"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<b[i][j]+a[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<"Matrix A - B"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]-b[i][j]<<" ";
		}	cout<<endl;
	}
	cout<<"Matrix B - A "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<b[i][j]-a[i][j]<<" ";
		}	cout<<endl;
	}
	
	/*cout<<" A * B "<<endl;
	for(int i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			
		}
	}*/
	cout<<"Identity Matrix"<<endl;
	int x[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<x[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"Principal Diagonal of Identity Matrix"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=i; j<=i; j++)
		{	
			cout<<x[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"Prncipal Diagonal right to left"<<endl;
		int n=2,m=2;
	for(int i=0; i<3; i++)
	{	
		for(int j=n; j>=m; j--)
		{
			cout<<x[i][j]<<" ";
		}	cout<<endl;
		n--;	m--;
	}
	
	int h[6]={1,2,2,2,3,5};
	int count_a;
	for(int i=0; i<6; i++)
	{
		if(h[i]==h[++i])
		{
			cout<<h[i]<<endl;
			
			count_a;
		}
		cout<<count_a;
	}
	
}






