/*
@author: Melissa Randolph
@date: 07/16/2026
@purpose: Program that manually sorting the array an ascending order and prints the ordered list to the console
*/

#include <iostream>
using namespace std;

int main(){
    const int TOTAL_SIZE = 10; 
    int numbers[TOTAL_SIZE] = {10, 90, 2, 25, 44, 88, 0, 4};

    //Manual Bubble Sort (Chap. 8, pg. 484) logic
    for (int maxElement = TOTAL_SIZE - 1; maxElement > 0; maxElement--){
        for (int i = 0; i < maxElement; i++) {
            if (numbers[i] > numbers[i + 1]) {
                //Swap the adjustacent elements using a temporary holding variable
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
    }
    //Prints the ordered list to the console
    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < TOTAL_SIZE; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}