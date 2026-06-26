/*
@author: Melissa Randolph
@date: 06/26/2026
@purpose: Calculating the average of 10 grades
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total_score = 0.0;
    double grade = 0;
    int grade_counter = 0; // Starts at Zero
    
    while (grade_counter < 10) { // Loop repeats as long as counter is less than 10
        cout << "Enter grade number" << (grade_counter + 1) << ": ";
        cin >> grade;

        total_score += grade; // Add to running total
        grade_counter++; // Increment counter by 1
    }
    double average = total_score / 10.0;
    cout << "The average of the 10 grade is: " << average <<endl;
    return 0;
}