/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
Hello, World!
BuzzFizzBuzzBuzzFizz, BuzzFizzBuzzBuzzBuzz!
02 Test 2
Input
Expected output
Cute Cat
BuzzFizzBuzzFizz BuzzFizzBuzz
03 Test 3
Input
Expected output
AEIOUaeiou
FizzFizzFizzFizzFizzFizzFizzFizzFizzFizz
04 Test 4
Input
Expected output
12345!?@#
12345!?@#
*/
#include <iostream>
#include <string>
#include <cctype>


bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    std::string s;
    getline(std::cin, s);
    for (char c : s) {
        if (std::isalpha(c)) {
            if (isVowel(c))
                std::cout << "Fizz";
            else
                std::cout << "Buzz";
        } else {
            std::cout << c;
        }
    }

    std::cout << std::endl;
}