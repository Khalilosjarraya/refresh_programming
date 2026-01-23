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
    std::string s10 {"this is a part of c++ code"};
    std::cout << s10 << std::endl;
    std::cout << s10.substr(0,6) << std::endl;
    std::cout << "the origin of  s10: \n" << s10 <<std::endl;
    
    std::string s15 = "this bala bla from Khalilos";
    std::cout<< "origin of s15:\n"<<s15<<"\n";
    std::cout <<"position of find:\n"<<s15.find("from")<<std::endl;
    s15.erase(s15.find("from"), 4);
    std::cout <<"s15 after erease of from:\n"<<s15<<std::endl;
    s15.clear();
    std::cout << "after clear s15: \n" << s15 <<std::endl;

    
    //std::cin only get one string the delimiter is space 
    std::string s30;
    std::cout << "enter some words: "<<std::
    std::cin>>s30;
    std::cout << "std::cin only takes one word, so s30:\n"<<s30<<std::endl;
    
    std::string s20;
    std::cout <<"the delimiter here is x, that means you can write whatever you want until x is detected"<<std::endl;
    std::getline(std::cin, s20, 'x');
    std::cout << "S20: "<<s20<<std::endl;
    std::cout << "length of s20: "<<s20.length()<<std::endl;
    
    return 0;
}