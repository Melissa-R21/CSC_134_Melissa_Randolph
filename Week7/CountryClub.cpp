/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose: Program that calculates the membership fee increasing by 6% each year for 5 years 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double currentFee = 250000.0; // Fee = $250,000
    const double INCREASE_RATE = 0.06; // Increase rate = 6%

    cout << fixed << setprecision(2); //formats the ouput stream to show exactly 2 decimal places
    cout << "Year\tProjected Membership Fee\n";
    cout <<"_______________________________________\n";

    for (int year = 1; year <= 5; year++) { //Runs a for loop exactly 5 times
        currentFee += (currentFee * INCREASE_RATE); // Calculates the 6% fee increase and adds it to the running fee total
        cout << year << "\t$" << currentFee << endl; //Outputs the current year itertation and the newly updated fee
    }
    return 0;
}