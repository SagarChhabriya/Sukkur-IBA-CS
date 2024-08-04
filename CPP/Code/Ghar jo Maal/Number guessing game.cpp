#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num; 
	int guess; 
	bool isGuessed; 

		srand(time(0)); 
		num = rand() % 100;
		isGuessed = false; 
	while (!isGuessed) 
{ 
		cout << "Enter an integer greater"<< " than or equal to 0 and "<< "less than 100: "; 
		cin >> guess; cout << endl; 
	if (guess == num) 
{ 
		cout << "You guessed the correct "<< "number." << endl; 
		isGuessed = true; 
} 
	else if (guess < num) 
		cout << "Your guess is lower than the "<< "number.\n Guess again!"<< endl; 
	else 
		cout << "Your guess is higher than "<< "the number.\n Guess again!"<< endl; 
} 
return 0;
}
