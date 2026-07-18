/*
@author: Melissa Randolph
@date: 07/16/2026
@purpose: Program that prints the days of the week 
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    const int DAYS_COUNT = 7; 
    //Index 0 represtents day 1, Index 1 represents day 2, ect..
    string days[DAYS_COUNT] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; 

    //Prints out the days of the week and counts them
    for (int i = 0; i < DAYS_COUNT; i++){
        cout << "Day " << (i + 1) << ": " <<days[i] << endl;
    }
    return 0;
}