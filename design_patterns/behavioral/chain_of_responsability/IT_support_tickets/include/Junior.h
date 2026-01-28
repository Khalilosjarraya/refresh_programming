#ifndef JUNIOR_H
#define JUNIOR_H
#include "BaseHandler.h"

class Junior : public BaseHandler
{
    public:
        void handle(std::string request) override;
}; 

#endif