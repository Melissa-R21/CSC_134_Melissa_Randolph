/*
@author: Melissa Randolph
@date: 06/09/2026
@purpose: This program calculates the product of two numbers
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
using namespace std;

int main(){
    int num1 = 5;
    int num2 = 10;
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
    return 0;
}

