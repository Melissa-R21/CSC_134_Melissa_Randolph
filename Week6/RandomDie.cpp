/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: Creating a program that would create a table for any number and it's square
*/

#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime> // Needed for time() function
using namespace std;

int main(){
// Seed the random number generator using the system clock
srand(static_cast<unsigned int>(time(0)));

int totalRolls;
cout << "How many times would you like to roll a single die? "; // Prompts the user to input a number
cin >> totalRolls;

cout << "\nRolling the die " << totalRolls << " times:" <<endl;

for ( int i = 0; i < totalRolls; i++) {
    //rand() % 6 gives 0-5. Adding 1 shifts the range to 1-6
    int roll = (rand() % 6) + 1;
    cout << "Roll #" << (i + 1) << ": " << roll << endl;
}
return 0;
}