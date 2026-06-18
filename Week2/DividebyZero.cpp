/*
@author: Melissa Randolph
@date: 06/06/2026
@purpose: Divide by Zero
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to advoid having to type std:: before every standard library function
using namespace std;

int main(){
    int num1 = 5;
    int quotient = num1 / 0;
    cout << "The quotient is " << num1 << "and " << 0 << " is " << quotient << endl;
    return 0;
}

