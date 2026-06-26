/*
@author: Melissa Randolph
@date: 06/26/2026
@purpose: Creating an infinite loop for the proper temperature check
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double target_temp = 212.34; 
    double current_input = 0.0;

    while (current_input != target_temp) { // Loop keeps running as long as the input does NOT equal 212.34
        cout << "Please enter the proper target temperature: "; //Prompts the user to enter a temperature
        cin >> current_input; 
    }
    cout << "This temperature has been successfully set, thank you." << endl; // This appears when the temperature inputted is 212.34
    return 0;
}