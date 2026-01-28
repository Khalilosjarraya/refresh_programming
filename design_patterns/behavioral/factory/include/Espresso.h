#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Coffe.h"

class Espresso : public Coffe
{
public:
    void prepare() override {
        std::cout << "Preparing an espresso\n";
    }
};
#endif
