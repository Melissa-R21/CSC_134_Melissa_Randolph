/*
@author: Melissa Randolph
@date: 06/12/2026
@purpose: calcualting the miles
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
using namespace std;

int main(){
    int v = 80;
    // Velocity in mph
    int t = 2;
    // Time in Hours
    int x = v * t;
    // Calculate the distance in Miles 
    cout << "The distance travelled is: " << x << " Miles." << endl;
    return 0;
}