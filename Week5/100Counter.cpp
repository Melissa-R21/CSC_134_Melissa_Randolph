/*
@author: Melissa Randolph
@date: 06/26/2026
@purpose: Creating a while-loop that loops until the 100th iteration
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int counter = 0; //Initalize the accumulator/counter variable at 0 

    while (counter < 100) {
        counter++; //Increments counter by 1 each time through
    }
    cout << "Loop finished. Total interations completed: " << counter << endl; //This prints out the final message to the console 
    return 0;
}