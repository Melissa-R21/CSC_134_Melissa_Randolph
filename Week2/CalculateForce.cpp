/*
@author: Melissa Randolph
@date: 06/12/2026
@purpose: Calculate Force
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
using namespace std;

int main(){
     double m = 10;
    // Mass in Kilograms
    double a = 9.81;
    // Acceleration in Meters per second squared
    double F = m * a;
    // Calculate the Force (Newtons)
    cout << "The Force is: " << F << " Newtons." << endl;
    return 0;
}