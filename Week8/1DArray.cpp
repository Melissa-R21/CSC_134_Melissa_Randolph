/*
@author: Melissa Randolph
@date: 07/15/2026
@purpose: A program that initalizes a 1-D array with 5 integers values and sums those values
*/

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5; 
    int number[SIZE] = {10, 20, 30, 40, 50}; // Initalizing with 5 integer values
    int total = 0;

    for (int i = 0; i < SIZE; i++) { //Summing the values
        total += number[i];
    }
    cout << "The total sum is: " << total << endl;
    return 0;
}