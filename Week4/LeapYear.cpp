/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Determind if the year is a leap year
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int year; //The year inputted by user
    cout << "Enter a year: "; //Prompts user to enter a year
    cin >> year;

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) //Checks to see if the year would be a leap year
    // Leap year is a multiple of 400, a muiltiple of 4, but not of 100
    {
        cout << "The year you entered: " << year << " is a leap year" << endl;
    }
    else {
        cout << "The year you entered: " << year << " is NOT a leap year" << endl; //If not a leap year, tell user
    }
    return 0;
}

