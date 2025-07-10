#include <iostream>
#include <cmath>

int add_Numbers(int a, int b)
{
    if (a < 0 || b < 0)
        return 0;
    else
        return a + b;
}

double get_cubique_sqr(int a = 1)
{
    return cbrt(a);
}

int main()
{

    std::cout << add_Numbers(3, 4) << std::endl;
    std::cout << add_Numbers(-3, 4) << std::endl;
    std::cout << "get cube root default = 1  "<< std::endl;
    std::cout << get_cubique_sqr() << std::endl;
    double number {};
    std::cin >>number;
    std::cout << "get cube root of:  "<<number <<std::endl;
    std::cout << get_cubique_sqr(number) << std::endl;
    
    std::cout << "the square root of the number: "<< number<<" " << sqrt(number) << std::endl;
    std::cout << "the sinus of the number: "<< number <<" " << sin(number) << std::endl;
    std::cout << "the cos of the number: "<< number << " "  << cos(number) << std::endl;
    std::cout << "the tan of the number: "<< number << " "  << tan(number) << std::endl;
    std::cout << "the floor of the number: "<< number << " "  << floor(number) << std::endl;
    std::cout << "the ceil of the number: "<< number << " "  << ceil(number) << std::endl;
    
    return 0;
}