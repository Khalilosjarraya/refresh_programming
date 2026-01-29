#include "BaseValidator.h"


BaseValidator::~BaseValidator()
{
    delete nextValidator;
};

Validator* BaseValidator::setNext(Validator* next)
{
    nextValidator = next;
    return next;
};

std::string BaseValidator::processValidation(std::string string_to_validate)
{
    if(nextValidator)
    {
        return nextValidator->processValidation(string_to_validate);
    }
    return "Success";

};