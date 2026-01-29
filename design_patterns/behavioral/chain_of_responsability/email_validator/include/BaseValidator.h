#ifndef BASEVALIDATOR_H
#define BASEVALIDATOR_H
#include "Validator.h"



class BaseValidator : public Validator
{
    public:
        ~BaseValidator();
        Validator* setNext(Validator* next) override;
        std::string processValidation(std::string string_to_validate) override;
    protected:
        Validator* nextValidator{nullptr};
};

#endif