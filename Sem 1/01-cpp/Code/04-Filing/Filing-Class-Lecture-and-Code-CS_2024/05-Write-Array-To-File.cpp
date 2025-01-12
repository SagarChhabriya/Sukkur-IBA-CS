// 1. Libraries
#include<iostream>
#include<fstream>
using namespace std;
int main(){

	// 2. Object
	ofstream File("A.txt");
	
	int arr[] = {1,2,3,4,5};
	
	// 3. Action
	int length = sizeof(arr)/sizeof(arr[0]); // array size or length: 20/4 = 5
	// where the 20 is each integer:4 * 5 = 20 bytes
	for (int i = 0; i < length; i++){
		File<<arr[i]<<endl;
	}
	
	// 4. Close
	File.close();
	
	cout<<"Updated Successfully!"<<endl;


}
