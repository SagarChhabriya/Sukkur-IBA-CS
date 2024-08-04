#include <iostream>
using namespace std;
int main()
{
	cout<<"RADHE RADHE "<<endl;
	/*int a[2][2]={1,2,3,4};
	for(int i=0; i<2; i++)
	{
		cout<<a[i][i]<<endl;
	}
	
	
	/*int b[2][2]={{1,2},{3,4} };
	cout<<b[0][3];*/
	/*int a[2][2]={1,2,3,4};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<a[i][j]<<" ";
		}	cout<<endl;
	}*/
	int a[3][3]={{1,2,3},{0,1,0}};
	int b[3][3]={{4,5,6},{0,1,0}};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<a[i][j]+b[i][j]<<" ";
		}	cout<<endl;
	}

}
