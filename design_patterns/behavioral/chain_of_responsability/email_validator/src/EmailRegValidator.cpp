#include "EmailRegValidator.h"

std::string EmailRegValidator::processValidation(std::string string_to_validate)
{
    std::cout <<"Checking if the input is a vaild email format!\n";
    
    if(!std::regex_match(string_to_validate, std::regex(EmailRegValidator::emailpattern)))
    {
        return "The input is not a vaild email";
    }

    return BaseValidator::processValidation(string_to_validate);
};