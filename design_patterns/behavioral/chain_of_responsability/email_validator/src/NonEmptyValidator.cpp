#include "NonEmptyValidator.h"

std::string NonEmptyValidator::processValidation(std::string string_to_validate)
{
    std::cout<<"Checking if the mail is empty or not!!\n";
    if(string_to_validate.empty())
    {
        return "Empty input, please enter a vaild mail";
    }
    return BaseValidator::processValidation(string_to_validate);
};