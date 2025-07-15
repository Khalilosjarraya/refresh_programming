/*
problem:
You receive a color as a rgb value. Invert it by every single color (255, 255, 0 becomes 0, 0, 255) and return the result.
Input
Line 1: Three space separated integers representing the r, g and b values.
Output
Line 1: Three space separated integers representing the r, g and b values of the inverted color.
Constraints
0 <= r,g,b <= 255
Example
Input
255 0 0
Output
0 255 255

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int r;
    int g;
    int b;
    cin >> r >> g >> b; cin.ignore();



    cout << 255-r << " "<<255-g <<" "<<255-b << endl;
}