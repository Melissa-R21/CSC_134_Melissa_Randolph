/*
@author: Melissa Randolph
@date: 06/06/2026
@purpose: Square Rooting a Real Number
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to advoid having to type std:: before every standard library function
#include <cmath>
//for sqrt function
using namespace std;

int main(){
    //declare the varibles for this program
    double num, result;
    //ask the user for a number and store it in the varible num;
    cout << "Enter a real number: ";
    cin >> num;
    //calculate the square root of the number and store it in the varible result
    result = sqrt(num);
    //print the result to the user
    cout << "The square root of " << num << " is " << result << endl;
    return 0;
}
