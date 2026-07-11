/*
@author: Melissa Randolph
@date: 07/11/2026
@purpose: Program that helps the user budget for a month
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double budget; //Overall monthly budget
    double expense; // each expense amount entered
    double totalExpenses = 0.0; // Track total spending
    char choice; // For the 'Y' and 'N' decision

    cout << "Enter the amount budgeted for the month: $";
    cin >> budget;
    

    do { //Begins a loop that gathers user expense cost
        cout << "Enter an expense amount: $"; //Loop to gather expenses
        cin >> expense;
        totalExpenses += expense; //Adds the newly entered amount into the tracking varaible

        cout << "Do you have another expense to enter (Y/N): ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    double difference = budget - totalExpenses; //Compute the final budget status

    cout << fixed << setprecision(2);
    cout << "\n__________________________\n";
    cout << "Total Expenses: $" << totalExpenses << endl;

    if (difference >= 0){
        cout << "You are UNDER budget by $" << difference << endl; //If the balance is zero or greater  
    }
    else {
        cout << "You are OVER budget by $" << -difference << endl; // Use involving minus to make the negative difference display as a positive value 
    }

    return 0;
}