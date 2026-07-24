/*
@author: Melissa Randolph
@date: 07/24/2026
@purpose: This program asks for the total number of days, loops to gather sales data, 
and writes each sales amount to week9_labs.txt
*/

#include <iostream>
#include <fstream> //Requires for file stream objects (ofstream)
using namespace std;

int main(){
    ofstream outputFile;
    int numDays;
    double sales;

    outputFile.open("week9_lab1.txt"); //Opens the ouput file
    
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
    }

   outputFile << sales << "\n"; //Write daily sales amount to the file
 
    outputFile.close(); //Closes file stream

    cout << "Sales data successfully saved to week9_labs1.txt!" << endl;

    return 0;
}
