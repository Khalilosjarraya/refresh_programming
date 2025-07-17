/*
Given n strings. Count the number of strings which have a prefix x
Input
Line 1: A string x which is the prefix
Line 2: n Number of strings
Next n Lines: y
Output
Line 1: The number of strings in y which have a prefix as x
Constraints
1 <= length of x <= 10
1 <= n <= 10
1 <= length of y <= 20
Example
Input
th
1
there
Output
1
*/

#include <iostream>
#include <string>


using namespace std;


int main()
{
    string x;
    getline(std::cin, x);
    int n;
    std::cin >> n; std::cin.ignore();
    int sum{0};
    for (int i = 0; i < n; i++) {
        std::string y;
        getline(std::cin, y);
        int index = y.find(x);
        if(index == 0)
            sum++;
    }


    std::cout << sum << std::endl;
}