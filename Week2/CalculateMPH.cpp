/*
@author: Melissa Randolph
@date: 06/12/2026
@purpose: Calculate MPH 
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
using namespace std;

int main(){
     int t = 80;
    // Time in Hours
    int x = 400;
    // Distance in Miles
    int v = x / t;
    // Calculate the Velocity in mph
    cout << "The velocity is: " << v << " mph." << endl;
    return 0;
}