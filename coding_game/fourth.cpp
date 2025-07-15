/*
problem:

You must output the string that consist of '-', '_' and '*'. Convert the given string by replacing upper case letters by '-', lower case letters by '_' and all other characters by '*'.
Input
Line 1: Any string S
Output
Line 1: The string that consist of '-', '_' and '*'.
If nth character of S is upper case, nth letter of the string is '-'.
If nth character of S is lower case, nth letter of the string is '_'.
Else, nth character of the string is '*'.
If there is a space: It also is "*".
Constraints
0 ≤ length of S ≤ 512
Example
Input
Hello World
Output
-____*-____

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(auto &i : s)
    {
        if(isupper(i))
        {
            i='-';
        }
        else if(islower(i))
        {
            i='_';
        }
        else
        {
            i='*';
        }
        cout << i;
    }
    
    cout<< endl;
}