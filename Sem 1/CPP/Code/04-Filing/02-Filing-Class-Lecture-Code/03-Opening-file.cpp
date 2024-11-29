#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream File;

    // Open the file "A.txt" in read mode
    File.open("A.txt", ios::in);

    if (!File) {
        cout << "Error opening file" << endl;
    } else {
        cout << "File Found" << endl;
        File.close();
    }

    return 0;
}