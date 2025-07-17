#include <iostream>
#include <ctime>
#include <cstdlib>

//we want to generate a rnadom sequence between 1 and 7 
int main() {
    size_t count{10};
    int min{1}, max{7}, random_number{};
    std::cout <<"Random number on system "  << RAND_MAX<<std::endl;  //here is alwayas: 2147483647
    
    std::srand(std::time(nullptr));  //if we comment this line we will always get the same sequenc. that's why a seeding random number generator
    for (size_t i{0}; i < count; i++) {
        /* code */
        random_number = std::rand() % max + min;
        std::cout << random_number << std::endl;
    }
    return 0;
}