/*
@author: Melissa Randolph
@date: 07/24/2026
@purpose: This program modifies Lab 1 by keeping a running total of all sales, 
formatting the total with 2 decimal places and appending the summary header to week9_lab2.txt
*/

#include <iostream>
#include <fstream> //file file I/O (ofstream)
#include <iomanip> //Setprecision, fixed
#include <sstream> //ostringstream formatting
using namespace std;

int main(){
ofstream outputFile;
int numDays;
double sales;
double totalSales = 0.0; //Running total variable

outputFile.open("week9_lab2.txt"); //Opens output file

 if (!outputFile){ //Checks if file opened successfully 
        cout << "ERROR opening file!" << endl; //If failed prints this prompt
        return 1;
    }

    cout << "Enter the number of days: "; //Prompts user for the number of days
    cin >> numDays;

    while (numDays <= 0){ //Input validation loop for number of days
        cout << "Please enter a postitve number of days: ";
        cin >> numDays;
    }

    for (int day = 1; day <= numDays; day++){ //Loop through each day to caputre sales and write to file
        cout << "Enter sales for day " << day << ": ";
        cin >> sales;
    
    outputFile << sales << "\n"; //Write daily sales amount to the file

    totalSales += sales; //Accumulates running sum
    }

    // Use <sstream> and <iomanip> to format the total string with 2 decimal places
    ostringstream formattedStream; 
    formattedStream << fixed << setprecision(2) << totalSales;

    //Write separator, formatted total, and ending line to file
    outputFile << "============================================\n";
    outputFile << "      Total Sales: $" << formattedStream.str() << "\n";;
    outputFile << "============================================\n";

    outputFile.close();
    cout << "Sales Summary successfully saved to week9_lab2.txt!" << endl;

    return 0;
}