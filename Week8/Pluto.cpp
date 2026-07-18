/*
@author: Melissa Randolph
@date: 07/15/2026
@purpose: Using for loops and arrays to program a list of all 8 planets and Pluto
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    const int SIZE = 9;
    string planets[SIZE] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Naptune", "Pluto"};

    for (int i = 0; i < SIZE; i++) { //Loops through and print each planet
        cout << planets[i] << endl;
    }
    return 0;
}