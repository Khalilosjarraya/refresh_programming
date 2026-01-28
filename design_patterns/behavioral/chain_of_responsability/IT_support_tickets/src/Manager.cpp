#include "Manager.h"

void Manager::handle(std::string request)
{
    if (request == "Refund")
    {
        std::cout << "Manger approved the refund\n";
    } else {
        std::cout <<"Manager can't handle this request: "<< request <<" more reasons should be provided\n";
        BaseHandler::handle(request);
    }
    
};