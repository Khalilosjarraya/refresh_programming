#include <iostream>
#include <vector> 

int main()
{
    std::vector <int> notes(3);
    std::cout<<"notes intially : "<<std::endl;
    for (auto &x : notes) {
        /* code */
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
    int som =0;
    for (const int &x : notes)
    {
        if(som<size_notes-1)
            std::cout << x << ",";
        else
            std::cout << x << std::endl;
        som++;
        //std::cout << notes[i] << std::endl;
        
    }
    //std::cout << std::endl;
    return 0;
}