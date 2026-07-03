/*
@author: Melissa Randolph
@date: 07/3/2026
@purpose: Creating a user input limit, using for loop
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int limit;
    cout << "Enter an integer vaule: "; //Prompts user to input a vaule
    cin >> limit;
    for (int i = 0; i < limit; i++){ //Loops from 0 up to, but not including, the user's limit
        cout << i << " ";
    }
    cout << endl;
    return 0;
}