#include "CoffeFactory.h"


Coffe* CoffeFactory::makeCoffe(const int& type)
{
    switch (type)
    {
    case  1:
        return new Espresso();
    case 2:
        return new Latte();
    case 3:
        return new Cappuccino();
    default:
        std::cout <<"invalid input\n";
        return nullptr;
    }

}

bool CoffeFactory::sugar()
{
    std::cout << "With sugar?:\nplease type yes or no \n";
    std::string choice{"nothing"};
    std::cin >> choice;
    
    if (choice == "yes" || choice =="YES" || choice =="Yes")
    {
            std::cout << "With sugar\n";
            return true;
    }
    else if (choice =="no" || choice == "NO" || choice =="No")
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