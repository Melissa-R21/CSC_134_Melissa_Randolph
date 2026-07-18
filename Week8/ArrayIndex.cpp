/*
@author: Melissa Randolph
@date: 07/16/2026
@purpose: Program using array and a for loop to print the value of each array element to the console based on its array index
*/

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 7;
    int numberList[SIZE] = {1, 2, 4, 8}; //Remaining 3 spots automatically intialize to 0

    for (int i = 0; i < SIZE; i++){ //Loop through array based on indexes
        cout << "Element at index " << i << ": " << numberList[i] <<endl; 
    }
    return 0;
}