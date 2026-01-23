#include <iostream>
unsigned long long Fibonacci(unsigned long long x)
{
    if(x<=1)
        return x;
    else
        return Fibonacci(x-1) + Fibonacci(x-2);
}
unsigned long long Factorial(unsigned long long x)
{
    if (x<=1)
    {
        return 1;
    }
    else
        return x * Factorial(x-1);
    
}
void calculate_Factorial_and_Fibonacci()
{
    unsigned long long x;
    std::cout<<"To calclukate Fibonacci and Fctorial of Enter a number: "<<std::endl;
    std::cin>>x;
    std::cin.ignore();
    std::cout << "Fibonacci: " << Fibonacci(x) << std::endl;
    std::cout << "Factorial: " << Factorial(x) << std::endl;
}

int main()
{
    calculate_Factorial_and_Fibonacci();
    return 0;
}