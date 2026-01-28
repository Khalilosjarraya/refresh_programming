#include "Senior.h"

void Senior::handle(std::string request)
{
    if(request == "SalesOfTools")
    {
        std::cout << "Senior support: HAndled the sales of new tools.\n";
    } else {
        std::cout <<"Senior support can't handle this\npass it to manager\n";
        BaseHandler::handle(request);
    }
};