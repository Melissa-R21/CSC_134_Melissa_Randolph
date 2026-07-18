/*
@author: Melissa Randolph
@date: 07/15/2026
@purpose: Create a program that calcualtes the average of the grades inputted by the user
*/

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 10;
    int Grades[SIZE];
    int total = 0;

    for (int i = 0; i < SIZE; i++) { //Prompt user for each grade
        cout << "Enter the grade value for student" << (i + i) << ": ";
        cin >> Grades[i];
        total += Grades[i];
    }
    
    double average = static_cast<double>(total) / SIZE; //Calculate and display average
    cout << "\nThe average for the grades is: " << average << endl;
    return 0;
}