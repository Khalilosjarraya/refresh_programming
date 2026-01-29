#ifndef NONEMPTYVALIDATOR_H
#define NONEMPTYVALIDATOR_H
#include "BaseValidator.h"




class NonEmptyValidator : public BaseValidator
{
    public:
        std::string processValidation(std::string string_to_validate) override;
};


#endif