// 1. Step 1: 
#include<iostream>
#include<fstream>

using namespace std;

int main(){

	// 2. File object | Variable
	ofstream MyFile("A.txt", ios::app);
	
	// 3. Action
	MyFile<<"This is line no 1."<<endl;
	MyFile<<"This is line no 2."<<endl;
	
	// 4. Close
	MyFile.close();
	
	
	
	
	
	
	
}



