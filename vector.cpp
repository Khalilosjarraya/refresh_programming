#include <iostream>
#include <vector> 

int main()
{
    std::vector <int> notes(3);
    std::cout<<"notes intially : "<<std::endl;
    
    for (auto &x : notes) {
        std::cout << x << std::endl;
    }
    
    std::cout<<"enter numbers"<<std::endl;
    std::cin >> notes.at(0);
    std::cin >> notes.at(1);
    std::cin >> notes.at(2);
    
    std::cout<<"notes are :"<<std::endl;
    for (int i=0; i<3; i++)
    {
        if(i != 2)
            std::cout << notes[i] << ",";
        else
        std::cout << notes[i] << std::endl;
        
    }
    // this output the size of the each case in bytes
    //int size_notes = sizeof(notes) / sizeof(notes[0]);
    // size of the vector in bytes 
    //int size_notes = sizeof(notes);
    // size of the vector: number of elements 
    int size_notes = notes.size();
    std::cout << "size = " << size_notes << std::endl;
    // it is better to use this method to output the elements of a vector using 
    notes.push_back(44);
    notes.push_back(55);
    
    size_notes = notes.size();
    std::cout << " new size = " << size_notes << std::endl;
    int som =0;
    
    for (const int &x : notes)
    {
        if(som<size_notes-1)
            std::cout << x << ",";
        else
            std::cout << x << std::endl;
        som++;
        
    }
    std::cout <<"now let's move to vectors with char"<<std::endl;
    std::vector <char> vowels(7);
    for (char &letre : vowels) {
        //std::cout << letre << std::endl;
        std::cout << letre << ",";
    }
    std::cout<< std::endl;
    vowels.at(0) = 'a';
    vowels[1] = 'e';
    for (char &letre : vowels) {
        std::cout << letre << ", ";
    }
    
    
    return 0;
}