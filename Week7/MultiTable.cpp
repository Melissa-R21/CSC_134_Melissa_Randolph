/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose: Program a multiplication table from 1-10 using nested loops
*/

#include <iostream>
#include <iomanip> // Used for setw()
using namespace std;

int main(){
    // Nested loops to print a 10x10 multiplication table
    for (int row = 1; row <=10; row++) { // Loops through 10 rows

        for (int col = 1; col <= 10; col++) { //Loops through 10 columns for every single row

            cout << setw(4) << (row * col); //set width to 4, making it neat
        }
        cout << endl; // Moves to the next row
    }
    return 0;
}