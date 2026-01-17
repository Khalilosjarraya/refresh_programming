#ifndef COFFE_H
#define COFFE_H
#include <iostream>
#include <string>

class Coffe
{
public:
    virtual void prepare() = 0;
    virtual ~Coffe(){};
};
#endif

