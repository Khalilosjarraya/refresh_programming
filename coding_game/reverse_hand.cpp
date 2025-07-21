/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
Scissors
Stone
02 Test 2
Input
Expected output
Stone
Hand
03 Test 3
Input
Expected output
Hand
Scissors
04 Test 4
Input
Expected output
$&cq5+6
Error

*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string o;
    getline(cin, o);
    if(o == "Stone")
        cout << "Hand" << endl;
    else if(o=="Scissors")
        cout << "Stone" << endl;
    else if(o=="Hand")
        cout << "Scissors" << endl;
    else
        cout <<"Error"<< endl;
}