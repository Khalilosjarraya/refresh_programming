#include "BaseValidator.h"
#include "EmailRegValidator.h"
#include "LengthValidator.h"
#include "NonEmptyValidator.h"


int main(int argc, char const *argv[])
{
    BaseValidator* emailValidator = new BaseValidator();
    
    emailValidator->setNext(new NonEmptyValidator())->setNext(new LengthValidator())->setNext(new EmailRegValidator());
    // emailValidator->setNext(new LengthValidator());
    // emailValidator->setNext(new EmailRegValidator());    

    std::cout << "Checking empty email:\n";
    std::cout << emailValidator->processValidation("");
    std::cout << "\n\n";
    
    std::cout << "Checking non empty email and the length:\n";
    std::cout << emailValidator->processValidation("khalil@t");
    std::cout << "\n\n";

    std::cout <<"Checking a non vaild email format\n";
    std::cout << emailValidator->processValidation("khalilos.com");
    std::cout << "\n\n";

    std::cout << "Checking a valid email\n";
    std::cout << emailValidator->processValidation("khalilos@gmail.com");
    std::cout << "\n\n";

    delete emailValidator;

    return 0;
}
