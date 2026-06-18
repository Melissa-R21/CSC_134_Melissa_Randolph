/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Calculating Averge
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1, num2, num3; // Integer values 
    double averge; // Holds averge 

    cout << "Enter Three Integer Vaules: "; //Prompts user to enter three numbers
    cin >> num1 >> num2 >> num3; // Reads numbers from users
    averge = (num1 + num2 + num3) / 3.0; //Calculates the averge
    cout << "The averge of your three numbers is: " << averge << endl; // Prints the averge of the three numbers
    return 0;
}