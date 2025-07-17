/*
problem
You are given a string S consisting of two concatenated digits. Let A be the first digit and B the second digit.

If both A and B are zero, output Nothing Lol. Otherwise, output "#"s A times and "*"s B times.
Input
Line 1: A string S consisting of two concatenated digits.
Output
Line 1: A string consisting of "#"s and "*"s, or Nothing Lol.
Constraints
Example
Input
27
Output
##*******

*/
#include <iostream>
#include <string>


int main()
{
    std::string s;
    getline(std::cin, s);
    int number = std::stoi(s);
    int first =number / 10;
    int second = number % 10;
    
    if(s[0]=='0' && s[1] == '0')
        std::cout << "Nothing Lol" << std::endl;
    else
    {
        for(int i=0; i<first; i++)
            std::cout<<"#";
        for(int i=0; i<second; i++)
            std::cout<<"*";
        std::cout<<std::endl;
    }

}