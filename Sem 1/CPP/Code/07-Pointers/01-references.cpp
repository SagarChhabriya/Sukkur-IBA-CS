#include <iostream>
#include <string>
using namespace std;

int main() {



	int a = 5;
	int b = a;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"value of b: "<<b<<endl;
	
	a = 10;
	b = 20;
	
	cout<<"Updated a value: "<<a<<endl;
	cout<<"Updated b value: "<<b<<endl;
	
	
	
	int c = 5;
	int &d = c;	
	
	cout<<"value of c: "<<c<<endl;
	cout<<"value of d: "<<d<<endl;
	
	c = 10;
	
	cout<<"Updated c value: "<<c<<endl;
	cout<<"d should be 20: "<<d<<endl;
	
	
    return 0;
}
