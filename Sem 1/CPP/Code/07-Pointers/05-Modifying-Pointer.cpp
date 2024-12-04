#include<iostream>
using namespace std;
int main(){

	int a = 5;
	int* b = &a;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"address of a: "<<&a<<endl;
	cout<<"pointer b: "<<b<<endl;
	
	// Changing the pointer
	
	*b = 10;
	
	cout<<"updated pointer b: "<<*b<<endl;
	cout<<"updated a value: "<<a<<endl;
	
	
	
}
