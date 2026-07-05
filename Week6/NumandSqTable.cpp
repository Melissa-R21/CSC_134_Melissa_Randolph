/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: Creating a program that would create a table of numbers and their squares from a specified minimum and maximum value.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int minNum = 0; // minNum is set to 0
    int maxNum = 100; // maxNum is set to 100

    // Display the table header 
    cout << "   Number   ||   Number Sqaure   " << endl;
    cout << "---------------------------------" << endl;

    // Loop through the range and display the table values
    for ( int i = minNum; i <= maxNum; i++) {
        cout << setw(6) << i << "      ||" << setw(14) << (i * i) << endl;
    }
    return 0;
}