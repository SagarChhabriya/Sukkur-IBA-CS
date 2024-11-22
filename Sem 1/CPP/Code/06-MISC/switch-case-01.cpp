#include <iostream>
using namespace std;

int main() {
    cout << "Welcome! This program will print the month name based on the month number you enter." << endl;
    cout << "Enter a number between 1 and 12 to get the corresponding month." << endl;

    int month;
    cout << "Enter the month number: ";
    cin >> month;

    // Check if the month number is valid (between 1 and 12)
    if (month >= 1 && month <= 12) {
        switch (month) {
            case 1: cout << "January"; break;
            case 2: cout << "February"; break;
            case 3: cout << "March"; break;
            case 4: cout << "April"; break;
            case 5: cout << "May"; break;
            case 6: cout << "June"; break;
            case 7: cout << "July"; break;
            case 8: cout << "August"; break;
            case 9: cout << "September"; break;
            case 10: cout << "October"; break;
            case 11: cout << "November"; break;
            case 12: cout << "December"; break;
            default: cout << "Invalid month"; break;
        }
    } else {
        cout << "Invalid input! Please enter a number between 1 and 12." << endl;
    }

    cout << endl << "Let's now check if a character is a vowel or consonant." << endl;
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    // Convert to lowercase to handle both uppercase and lowercase letters easily
    letter = tolower(letter);

    // Check if the letter is a vowel
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        cout << "The letter '" << letter << "' is a vowel." << endl;
    } else {
        cout << "The letter '" << letter << "' is a consonant." << endl;
    }

    return 0;
}
