/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose: Program that prints a chessboard pattern of astrisks and spaces using nested loops
*/

#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter the size of the chessboard: ";
    cin >> size;

    for (int row = 0; row < size; row++) { //Outer loop that controls the vertical rows

        for (int col = 0; col < size; col++){ //Inner loop that horizontal columns 

            if ((row + col) % 2 == 0){ //Checks if the sum of the current row and column is an even number
                cout <<"*";
            }
          else {
            cout << " "; // Makes a space inbetween the astrisks
          }
        }  
        cout << endl;
    }
    return 0;
}