#ifndef LATTE_H
#define LATTE_H

#include "Coffe.h"

class Latte : public Coffe 
{

public:
    void prepare() override {
        std::cout << "Prepare a Latte coffe\n";
    }

};
#endif

