#ifndef BASEHANDLER_H
#define BASEHANDLER_H
#include "Handler.h"
#include <string>

class BaseHandler : public Handler
{
    public:
        void setNext(Handler* next) override;
        void handle(std::string request) override;
        ~BaseHandler(){ delete nextHandler;};
    protected:
        Handler* nextHandler{nullptr};
};

// enum Requests {
//     Refund,
//     ResetPassword,
//     SalesOfTools
// };

#endif 