/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: Creating a program that would create a table for any number and it's square
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int targetNumber;

    cout << "Enter an integer for the multiplication table: ";
    cin >> targetNumber;

    cout << "\nMultiplication Table for " << targetNumber << ":" << endl;
    cout << "----------------------------" << endl;

    // Displays the mathematical results from 0 up through 12
    for ( int i = 0; i <= 12; i++) {
        cout << targetNumber << " x " << i << " = " << (targetNumber * i) << endl;
    }
    return 0;
}