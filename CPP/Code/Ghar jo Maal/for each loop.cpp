#include <iostream>
using namespace std;
int main()
{
	int	arr[]={10,20,30,40};
	cout<<"Traversing the array with for each using array's data type "<<endl;
	for(int x : arr )
	cout<<x<<" "<<endl;
	
	cout<<"Traversing the array with foreach using auto keyword : " <<endl;
	for(auto x : arr)
	cout<<x<<endl;
}
      
