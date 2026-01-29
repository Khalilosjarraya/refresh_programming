#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <string>
#include <iostream>




class Validator
{
    public:
        virtual ~Validator() {};
        virtual Validator* setNext(Validator* next) = 0;
        virtual std::string processValidation(std::string string_to_validate) = 0;
        
};


#endif