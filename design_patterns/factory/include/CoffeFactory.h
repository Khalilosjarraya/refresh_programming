#ifndef COFFEFACTORY_H
#define COFFEFACTORY_H

#include "Espresso.h"
#include "Latte.h"
#include "Cappuccino.h"

class CoffeFactory
{
public:
    static Coffe* makeCoffe(const int& type);
    static bool sugar();
};
#endif
