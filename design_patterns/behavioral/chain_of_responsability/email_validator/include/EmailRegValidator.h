#ifndef EMAILREGVALIDATOR_H
#define EMAILREGVALIDATOR_H

#include "BaseValidator.h"
#include <regex>

class EmailRegValidator : public BaseValidator
{
    public:
        std::string processValidation(std::string string_to_validate) override;
    private:
        const std::string emailpattern = "^\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*$";

};





#endif
