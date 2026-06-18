/*
@author: Melissa Randolph
@date: 06/18/2026
@purpose: Example of if-else statements in C++
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
const int HIGH_SCORE = 95; // Constant for high score threshold
int score1, score2, score3; // Hold test scores
double averge; // Holds averge score

cout << "Enter three test scores: "; // Prompt user for input
cin >> score1 >> score2 >> score3; // Reads three test scores from user
averge = (score1 + score2 + score3) / 3.0; // Calculate the averge
cout << fixed << setprecision(2); // Get the output to show two decimal places
cout << "Averge Score: " << averge << endl;

if (averge >= HIGH_SCORE) { // Check if averge is greater than or equal to the high score threshold
    cout << "Congraulations! You have a HIGH SCORE!\n" << endl; // Output message if averge score is a high score
}
else{
    cout << "Keep Trying! You can improve your score!\n" << endl; // Output message if averge score is less than the high score
}

    return 0; // Returns 0 to indicate successful program termination
}