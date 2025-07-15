/*
Problem
You must output the correct string concatenation depending on the sum result.
If it's positive, output "Foo"
If it's negative, output "Bar"
If it's even, concatenate " & Baz" to the output
If it's odd, concatenate " & Qux" to the output

Note: Sum will never be zero
Input
Line 1 : An integer N for the number of integers to sum.
Next N lines: A positive or negative integer K
Output
Line 1 : A string containing the correct two words.
Constraints
-100<=K<=100
Sum will never be zero
Example
Input
1
6
Output
Foo & Baz
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int n;
    int sum{0};
    string output;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; cin.ignore();
        sum +=k;
    }
    if(sum >=0)
    {
        output ="Foo";
        if(sum % 2 == 0)
        {
            output += " & Baz"; 
        }
        else
            output +=  " & Qux";
    }
    else if(sum < 0)
    {
        output = "Bar";
        if(sum % 2 == 0)
        {
            output += " & Baz"; 
        }
        else
            output +=  " & Qux";
    }

    cout << output << endl;
}