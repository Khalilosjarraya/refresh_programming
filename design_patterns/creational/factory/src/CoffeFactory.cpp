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
