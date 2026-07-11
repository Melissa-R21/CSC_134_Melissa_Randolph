/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose:  Program a sqaure patter using astrisks
*/

#include <iostream>
using namespace std;

int main (){
    int sidelength;

    cout << "Enter the side length of the square: ";
    cin >> sidelength;

    for (int row = 1; row <= sidelength; row++){ //Outer loop for rows

        for (int col = 1; col <= sidelength; col++) { //Inner loop for columns
            cout << "* ";
        }
        cout << endl; //Ends every line to the next
    }
    return 0;
}