/*
@filename: videoQuiz.cpp
@purpose: A program that collects test scores from the user, calculates the statistics (total, count, passing scores), evaluates the overall
            average, and determines passing status.
*/

#include <iostream>

using namespace std;

int main()
{
    int score; // Holds an invdividual test scare inputted by the user
    int count = 0; // Tracks the total number of scores entered
    int passingScores = 0; // Tracks how many scores that are 70 or higher
    float total = 0.0f; // Tracks the running sum of all scores for averaging
    bool continueEntering = true; // Loop control flag to determind if the user has more data

    while (continueEntering) // Loop continues running as long as continueEntering remains true
    {  
        // Prompts the user for a single test score and reads it
        cout << "Enter a test score (0 - 100): "; 
        cin >> score;

        // Accumlates the input score into the running total and increment score count
        total += score; 
        count++;

        // Determinds if the current score qualifies as a passing grade 
        if (score >= 70)
        {
            passingScores++; // Increment the passing score tracker
        }

        cout << "Enter another score? (1 for true, 0 for false): "; // Ask the user if they would like to enter in another score
        cin >> continueEntering; // Overwrites the loop flag with user's choice
    }

    float average = 0.0f; // Holds the final calculated class average

    if (count > 0) 
    {
        average = total / count; // Calculate the mean average
    }

    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;

    bool classPassed = average >= 70.0f; // Evaluates if the overall average meets the passing threshold of 70 

    cout << "Class Average Passing: " << classPassed << endl; // Outputs 1 (true) if the class passed, or 0 (false) if it did not 

    return 0; // Terminates the program successfully
}
