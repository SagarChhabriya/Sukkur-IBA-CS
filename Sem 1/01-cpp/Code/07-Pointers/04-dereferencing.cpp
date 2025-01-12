#include<iostream>
using namespace std;
int main(){

	// But how can I get the value of a pointer variable?
	
	int a = 5;
	int* b = &a;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"address of a: "<<&a<<endl;
	cout<<"pointer b: "<<b<<endl;
	
	
	cout<<"value in pointer b: "<<*b<<endl;
	// The process of getting value of a pointer is called dereferncing.


}
