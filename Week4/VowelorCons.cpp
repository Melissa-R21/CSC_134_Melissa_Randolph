/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Determine if a single charater is a consonant or vowel
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char ch; //Store a character
    cout << "Enter a single character: "; //Prompts the user to input a character
    cin >> ch;
    if ( ch >= '0' && ch <= '9') //If user puts in a number, it would be rejected
    {
        cout << "ERROR! Numeric values are not allowed!\n" << endl;
    }
    else if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' || ch == 'o' || 
        ch == 'O' || ch == 'u' || ch == 'U') //Checks if character is a vowel
    {
        cout << ch << " this is a vowel\n";
    }
    else {
        cout << ch << " this is a consonant\n"; //If not a vowel, treat like a consonant
    }
    return 0;
}