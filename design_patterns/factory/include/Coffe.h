#ifndef COFFE_H
#define COFFE_H
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

class Coffe
{
public:
    virtual void prepare() = 0;
    bool sugar()
    {
        std::cout << "With sugar?:\nplease type yes or no \n";
        std::string choice{"nothing"};
        std::cin >> choice;
        std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c){return std::tolower(c);});
        
        if (choice == "yes")
        {
            std::cout << "With sugar\n";
            return true;
        }
        else if (choice =="no")
        {
            std::cout <<"Without sugar\n";
            return false;
        }
        else
        {
            std::cout <<"no valid choice!!\nplease enter yes or no\n";
            exit(EXIT_FAILURE);
        }
    
    }
    virtual ~Coffe(){};
};
#endif

