// 
// Problem:
// the game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
// 01 Test 1
// Input
// Expected output
// CODE
// ?
// C???
// CO??
// COD?
// CODE
// 02 Test 2
// Input
// Expected output
// CODINGAME
// .
// C........
// CO.......
// COD......
// CODI.....
// CODIN....
// CODING...
// CODINGA..
// CODINGAM.
// CODINGAME
// 03 Test 3
// Input
// Expected output
// CHARLEMAGNE
// _
// C__________
// CH_________
// CHA________
// CHAR_______
// CHARL______
// CHARLE_____
// CHARLEM____
// CHARLEMA___
// CHARLEMAG__
// CHARLEMAGN_
// CHARLEMAGNE
// 04 Test 4
// Input
// Expected output
// TOTO
// AFRICA
// TAFRICAAFRICAAFRICA
// TOAFRICAAFRICA
// TOTAFRICA
// TOTO
// 05 Test 5
// Input
// Expected output
// SNORE
// ZZZ
// SZZZZZZZZZZZZ
// SNZZZZZZZZZ
// SNOZZZZZZ
// SNORZZZ
// SNORE
// 06 Test 6
// Input
// Expected output
// MANIPULATION
// ASLEEP
// MASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MAASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MANASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MANIASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MANIPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MANIPUASLEEPASLEEPASLEEPASLEEPASLEEPASLEEP
// MANIPULASLEEPASLEEPASLEEPASLEEPASLEEP
// MANIPULAASLEEPASLEEPASLEEPASLEEP
// MANIPULATASLEEPASLEEPASLEEP
// MANIPULATIASLEEPASLEEP
// MANIPULATIOASLEEP
// MANIPULATION
// 07 Test 7
// Input
// Expected output
// SYMBOLS
// $^#)@!$
// S$^#)@!$$^#)@!$$^#)@!$$^#)@!$$^#)@!$$^#)@!$
// SY$^#)@!$$^#)@!$$^#)@!$$^#)@!$$^#)@!$
// SYM$^#)@!$$^#)@!$$^#)@!$$^#)@!$
// SYMB$^#)@!$$^#)@!$$^#)@!$
// SYMBO$^#)@!$$^#)@!$
// SYMBOL$^#)@!$
// SYMBOLS
// 08 Test 8
// Input
// Expected output
// GETOUTOFMYOFFICE
// !!!!
// G!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GET!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOU!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUTO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUTOF!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUTOFM!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUTOFMY!!!!!!!!!!!!!!!!!!!!!!!!
// GETOUTOFMYO!!!!!!!!!!!!!!!!!!!!
// GETOUTOFMYOF!!!!!!!!!!!!!!!!
// GETOUTOFMYOFF!!!!!!!!!!!!
// GETOUTOFMYOFFI!!!!!!!!
// GETOUTOFMYOFFIC!!!!
// GETOUTOFMYOFFICE

#include <iostream>
#include <string>

int main()
{
    std::string word{}, charac{};
    std::cin>>word;
    std::cin>>charac;

    std::cout << "word: " << word <<" charac: "<< charac << std::endl;
    int size = word.length();
 
 
    for(int j=0; j<size; j++)
    {
        
        for(int i=0; i<size; i++)
        {
            if(i<=j)
                std::cout << word[i];
            else
                std::cout << charac;
        }
        std::cout << std::endl;
    }
  
}