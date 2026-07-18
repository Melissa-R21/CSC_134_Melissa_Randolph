/*
@author: Melissa Randolph
@date: 07/15/2026
@purpose: Creating a program that uses 1D-array and for loops to list the months of the year and how many days in each.
*/

#include <iostream>
using namespace std;

int main(){
    const int MONTHS = 12;
    int daysInMonths[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //Index 0 represtents Month 1, Index 1 represents Months 2, ect..

    for (int i = 1; i < MONTHS; i++){
        cout << "Month " << (i + 1) << " has " << daysInMonths[i] << " days. \n\n"; //Prints starting from Month 2 (index 1) to match the prompt's provided format
    }
    return 0;
}