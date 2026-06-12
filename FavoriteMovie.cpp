/*
@author: Melissa Randolph
@date: 06/09/2026
@purpose: This program calculates the product of two numbers
*/

//include the iostream library for input and output
#include<iostream>
//use the standard namespace to advoid having to type std:: before every standard libary function
#include<string>
//used for the string class
using namespace std;

int main(){
    string movieTitle;
    movieTitle = "Lilo and Stitch";
    cout << "          My favorite movie is " << movieTitle << endl;

    cout << "                       Main Characters:      " << endl;
    cout << "  Voice Actors                 |     Characters " << endl;
    cout << "  Chris Sanders                |     Stitch " << endl;
    cout << "  Daveigh Chase                |     Lilo Pelekai " << endl;
    cout << "  David Ogden Stiers           |     Jumba Jookiba " << endl;
    cout << "  Kevin Michael Richardson     |     Captain Gantu " << endl;
    cout << "  Tia Carrere                  |     Nani Pelekai " << endl;
    cout << "  Kevin McDonald               |     Pleakley " << endl;
    cout << "  Ving Rhames                  |     Cobra Bubbles " << endl;
    return 0;
}