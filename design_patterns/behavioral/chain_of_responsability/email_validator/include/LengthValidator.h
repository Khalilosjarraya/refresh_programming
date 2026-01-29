#ifndef LENGTHVALIDATOR_H
#define LENGTHVALIDATOR_H

#include "BaseValidator.h"
const  int len {10};

class LengthValidator : public BaseValidator
{
    public:
        std::string processValidation(std::string string_to_validate) override;
    // private:
    //     int len {10};
};


#endif