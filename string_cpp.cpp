#include <iostream>
#include <string> 

int main()
{
    //empty string
    std::string s1; 
    std::cout<< "s1: " << std::endl;
    // 
    std::string s2 {"Khalilo"};
    std::cout<< "s2: " << s2 <<std::endl;
    // copy of s2 
    std::string s3 {s2};
    std::cout<< "make a copy of s2 " << std::endl;
    std::cout<< "s3: " << s3 <<std::endl;
    //removes first 4 characters for the new string
    std::string s4 (s3,4);
    std::cout<< "removes first 4 characters from s3"<< std::endl;
    std::cout<< "s4: " << s4 <<std::endl;
    //takes only 4 chars 
    std::cout<< "takes only first 4 characters from s3"<< std::endl;
    std::string s5 {s2,0,4};
    std::cout<< "s5: " << s5 <<std::endl;
    //
    //std::string s8 {s2,5};
    std::string s8 {"Khalilos",6};
    std::cout<< "s8: " << s8 <<std::endl;
    //takes only 4 chars in another way
    std::string s6 (s3,0,4);
    std::cout<< "s6: " << s6 <<std::endl;
    
    std::string s7 (5, 'A');
    std::cout<< "initialize a string with a character: s7 (5,'A'): " <<s7<<std::endl;
    std::string s9 {s7 + s8};
    std::cout << "s9: " << s9 << std::endl;

    // to display elements of a string 
    for (const char &i : s9) {
        std::cout << i << std::endl;
    }
    std::cout<<std::endl;
    // to display code ASCII 
    for (const int &i : s9) {
        std::cout << i << std::endl;
    }
    
    
    return 0;
}