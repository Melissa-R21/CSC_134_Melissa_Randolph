/*
@author: Melissa Randolph
@date: 06/12/2026
@purpose: Calculate Volts
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
using namespace std;

int main(){
     int I = 10;
    // Current
    int R = 2;
    // Resistance
    int V = I * R;
    // Calculate the Voltage
    cout << "The Voltage is: " << V << " Volts." << endl;
    return 0;
}