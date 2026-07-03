/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: Creates a for loop that loops 50 times and sums the index and the adder variable
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int sumOp = 0;
    int adder = 10;

    //Loop runs exactly 50 time (0 through 49)
    for (int i = 0; i < 50; i++) {
        sumOp = sumOp + i + adder; // Sums the index and the adder variable
        cout << "Iteration " << i << " - sumOp: " << sumOp << endl;
    }
    return 0;
}