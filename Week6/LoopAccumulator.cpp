/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: In a for loop, using an accumulator to count the number of iterations.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int accumulator = 0; // Intitialized to 0 as requested in the lab

    for (int i = 0; i < 100; i++){ // Loops exactly 100 times
        accumulator += 1; // Adds 1 to each iterations
    }
    cout << "The accumulator value is: " << accumulator << endl;
    return 0;
}
