/*
@author: Melissa Randolph
@date: 06/26/2026
@purpose: Testing an Infinite Loop in C++
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    while (true) { // This loop condition is always true, therefore it never ends.
        cout << "This is INFINITE!" << endl;
    }
    return 0;
}