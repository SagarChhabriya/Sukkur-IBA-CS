#include<iostream>
using namespace std;
int main(){

	// How to hold the memory address?
	// There comes the concept of the pointers.
	
	int a = 5;
	
	cout<<a<<endl;
	cout<<&a<<endl;
	
	
//	int b = &a;	
	
	// an ordinary variable can't store the memory address
	// create a pointer by assigning it and * (Astrisk)
	
	
	int* b = &a;	
	
	cout<<"value of a: "<<a<<endl;
	cout<<"address of a: "<<&a<<endl;
	cout<<"pointer b: "<<b<<endl;
	
	
}
