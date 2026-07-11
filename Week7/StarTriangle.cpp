/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose: Program a right angle triangle of stars using nesting loops
*/

#include <iostream>
using namespace std;

int main(){
    int maxRows;

    cout <<"Enter the number of rows: ";
    cin >> maxRows;

    for (int row = 1; row <= maxRows; row++){ // Outer loops for rows

        for (int star = 1; star <= row; star++){ // Inner loop prints stars equal to the current row number
            cout <<"*";
        }
        cout << endl; // Moves to the next row
    }
    return 0;
}