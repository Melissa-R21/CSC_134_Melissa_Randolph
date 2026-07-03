/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: In a for loop, count down from 100 to 1
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for (int i = 100; i >= 1; i--){ // Starts at 100, after every loop it decreases by 1, and stops after printing 1
        cout << i << " ";
    }
    cout << endl;
    return 0;
}