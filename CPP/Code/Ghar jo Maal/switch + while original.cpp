#include <iostream>
using namespace std;
int main()
{
		char letter; 
			cout << "Program to convert uppercase "<< "letters to their corresponding "<< "telephone digits." << endl; 
			cout << "To stop the program enter #."<< endl; 
			cout << "Enter a letter: "; 
			cin >> letter; cout << endl; 
		while (letter != '#') 
{
			cout << "The letter you entered is: "<< letter << endl; 
			cout << "The corresponding telephone "<< "digit is: "; 
		if (letter >= 'A' && letter <= 'Z') 
		switch (letter) 
{
		case 'A':
		case 'B':
		case 'C':
			cout << 2 <<endl; 
		break; 

	
		case 'D':
		case 'E':
		case 'F':
			cout << 3 << endl; 
		break; 
		case 'G':
		case 'H':
		case 'I':
			cout << 4 << endl; 
		break; 
		case 'J':
		case 'K':
		case 'L':
			cout << 5 << endl; 
		break; 
		case 'M':
		case 'N':
		case 'O':
			cout << 6 << endl; 
		break; 
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			cout << 7 << endl;
		break; 
		case 'T':
		case 'U':
		case 'V':
			cout << 8 << endl; 
		break; 
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cout << 9 << endl; 
}
		else 
			cout << "Invalid input." << endl; 
			cout << "\nEnter another uppercase "<< "letter to find its "<< "corresponding telephone digit."<< endl; 
			cout << "To stop the program enter #."<< endl; 
			cout << "Enter a letter: "; 
			cin >> letter;
			cout << endl; 
}
return 0;
}