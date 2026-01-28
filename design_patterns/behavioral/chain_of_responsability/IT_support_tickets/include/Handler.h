#ifndef HANDLER_H
#define HANDLER_H
#include <iostream>
#include <string>
#include <memory>


class Handler
{
public:
    virtual ~Handler(){};
    virtual void setNext(Handler* next) = 0;
    virtual void handle(std::string request) = 0 ;
};


#endif