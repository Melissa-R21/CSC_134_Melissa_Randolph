/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Printing a letter grade based off the grade averge
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
     int num1, num2, num3; // Integer values 
    double average; // Holds averge 

    cout << "Enter three integer vaules to caluate grade averge: "; //Prompts user to enter three numbers
    cin >> num1 >> num2 >> num3; // Reads numbers from users
    average = (num1 + num2 + num3) / 3.0; //Calculates the average
    cout << fixed << setprecision(2); // Get the output to show two decimal places
    cout << "The average of your three numbers is: " << average << endl; // Prints the averge of the three numbers

    // To determine the Letter Grade
    if (average >= 90 && average >= 100) { //Checks if the averge is bewteen 100 and 90
        cout << "Letter Grade: A\n" << endl;
    }
    else if (average >= 80 && average >= 89) { //Checks if the average is bewteen 80 and 89
        cout << "Letter Grade: B\n" << endl;
    }
 else if (average >= 70 && average >= 79) { //Checks if the average is bewteen 70 and 79
        cout << "Letter Grade: C\n" << endl;
    }
  else if (average >= 80 && average >= 89) { //Checks if the average is bewteen 60 and 69
        cout << "Letter Grade: D\n" << endl;
    }
   else if (average <= 60) { //Checks if the average less than or equal to 60
        cout << "Letter Grade: F\n" << endl;
    }
return 0;
}