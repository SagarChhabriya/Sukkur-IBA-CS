// 1. Include libraries
#include<iostream>
#include<fstream>

using namespace std;
int main(){

	// 2. Create an object, i.e., define a variable.
	// Use 'ifstream' input file stream for reading
	ifstream ReadFile("A.txt");	
	
	
	// 3. Read the file 
		string text = "";
		
		
	// a. Reads a word from the file
		ReadFile>>text;
		cout<<text<<endl;
	
	// b. Reads a line from the file
		getline(ReadFile,text);
		cout<<text<<endl;
	// c. Reads all the lines from the file
		while(getline(ReadFile,text)){
			cout<<text<<endl;
		}


	// 4. Close the file
		ReadFile.close();
	
	return 0;

}
