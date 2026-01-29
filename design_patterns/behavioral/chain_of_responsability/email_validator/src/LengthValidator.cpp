#include "LengthValidator.h"

std::string LengthValidator::processValidation(std::string string_to_validate)
{
    if(string_to_validate.length() < len)
    {
        return "enter a valid length of email with minimum of charchters: " + std::to_string(len);
    }
    return BaseValidator::processValidation(string_to_validate);
};