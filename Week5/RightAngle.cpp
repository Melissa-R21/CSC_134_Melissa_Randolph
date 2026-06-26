/*
@author: Melissa Randolph
@date: 06/26/2026
@purpose: Calculating a Right Triangle Angle
*/

#include <iostream>
#include <iomanip>
#include <cmath> // For squrt, atan2, and M_PI
using namespace std;

int main(){
    double x = 3.0; // Length of leg x (adjacent)
    double y = 4.0; // Height of leg y (opposite)

    double c= sqrt(pow(x,2) + pow(x,2)); // Calculates hypotenuse
    double theta_radians = atan2(y, x);
    double theta_degrees = theta_degrees = theta_radians * (180.0/ M_PI); // Calculates thate in radians and convert to degrees

    if (theta_degrees >= 53.125 && theta_degrees <= 53.135) { // Check to see of it rounds closely to 53.13
        cout << "This is a 3-4-5 triangle" << endl;
    }
    else{
        cout << "This is NOT a 3-4-5 triangle" << endl;
    }
    return 0;

    }