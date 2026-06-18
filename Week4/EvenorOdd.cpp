/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Determine if a number is odd or even
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int number; //Holds number
    cout << "Enter an integer to determind if even or odd: "; //Prompts the user to input
    cin >> number; //Reads the number to the user
    if (number % 2 == 0)//Check to see if the number is even 
    { 
        cout << number << " is even.\n"; //Tells the user the number is even
    }
    else {
        cout << number << " is odd.\n"; //If not even then this tells the user the number is odd
    }
    return 0;
}