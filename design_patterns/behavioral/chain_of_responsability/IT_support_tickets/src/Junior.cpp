#include "Junior.h"

void Junior::handle(std::string request) {
    if(request == "ResetPassword")
    {
        std::cout << "Junior support handeled the reset of password\n";
    } else {
        std::cout << "Junior support: can't handle this request\nThe request is forwarded to Senior support\n";
        BaseHandler::handle(request);
    }
};
