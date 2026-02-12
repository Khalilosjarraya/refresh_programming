#include "CoffeFactory.h"
#include <string>
#include <iostream>
int main(int argc, char const *argv[])
{
    
    int choice{};
    std::cout <<"Choice your coffee:\n1-Espresso\n2-Capuccino\n3-Latte\n\nplease enter a number from 1 to 3\n";
    std::cin >> choice;
    Coffe *coffe = CoffeFactory::makeCoffe(choice);

    //if coffe is not nullptr
    if(coffe != nullptr)
    {
        coffe->prepare();
        coffe->sugar();
        delete coffe;
    }
    return 0;
}
