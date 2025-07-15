/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
1
Short text
txet trohS
02 Test 2
Input
Expected output
0
Another text
Another text
03 Test 3
Input
Expected output
100
Believe in yourself!
Believe in yourself!
04 Test 4
Input
Expected output
101
The future belongs to those who believe in the beauty of their dreams.
.smaerd rieht fo ytuaeb eht ni eveileb ohw esoht ot sgnoleb 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int num;
    cin >> num; cin.ignore();
    string sentence;
    getline(cin, sentence);

    if(num % 2 == 0)
    {
        cout << sentence;
    }
    else
    {
        int size = sentence.length();
        for(int i=size-1; i >=0; i--)
        {
            cout<<sentence[i];
        }
    }

    cout << endl;
}