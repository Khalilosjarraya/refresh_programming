#include "Junior.h"
#include "Senior.h"
#include "Manager.h"
#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    Junior* junior = new Junior();
    Senior* senior = new Senior();
    Manager* manager = new Manager();
    
    junior->setNext(senior);
    senior->setNext(manager);

    std::cout <<"Client needs to reset the password\n";
    junior->handle("ResetPassword");
    std::cout <<"\n\n";

    std::cout <<"Client needs a new gadget\n";
    junior->handle("SalesOfTools");
    std::cout <<"\n\n";

    std::cout <<"Clinet needs a refund!\n";
    junior->handle("Refund");
    std::cout <<"\n\n";

    std::cout <<"Client wants to change the PC\n";
    junior->handle("New Pc");
    std::cout <<"\n\n";

    return 0;
}
