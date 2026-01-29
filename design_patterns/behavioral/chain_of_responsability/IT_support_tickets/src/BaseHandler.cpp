#include "BaseHandler.h"

void BaseHandler::setNext(Handler* next)  
{
    nextHandler = next;
}

void BaseHandler::handle(std::string request) 
{
    if(nextHandler)
    {
        nextHandler->handle(request);
    } else
    {
        std::cout << "Request: "<< request <<" is unhandled\nWe need to call the client to get more details\n";
    }
    
}