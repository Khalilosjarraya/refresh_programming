#ifndef SENIOR_H
#define SENIOR_H
#include "BaseHandler.h"

class Senior : public BaseHandler
{

    public:
        void handle(std::string request) override;
};

#endif