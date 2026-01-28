#ifndef MANAGER_H
#define MANAGER_H
#include "BaseHandler.h"

class Manager : public BaseHandler
{

public:
    void handle(std::string request) override;
   
};


#endif