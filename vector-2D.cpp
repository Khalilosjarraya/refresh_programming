#include <iostream>
#include <vector> 

int main()
{
    std::vector <std::vector<int>> matrice {
        {1, 3, 4, 7,11},
        {7, 11, 18, 29},
        {29, 47, 76, 123}
    };
    
    std::cout << "this is the matrice: " << std::endl;
    int size =0;
    for (auto &i : matrice) {
        size = i.size();
        std::cout << "size of the vector:" << size <<std::endl;
        for (int con = 0; con < size; con++) {
            if( con != size-1)
                std::cout<<i.at(con) << ",";
            else
                std::cout<<i.at(con) << std::endl;
        }
    }
    
    // we can use array semantic 
    std::cout<< "first element of the matrice: ";
    std::cout<< matrice[0][0] << std::endl;
    // or using at which is for vectors
    std::cout<< "second element of the matrice: ";
    std::cout << matrice.at(0).at(1) <<std::endl;
    // let's try to push back
    std::cout<< "push back to the second vector: ";
    matrice.at(1).push_back(47);
    std::cout<<matrice.at(1).at(matrice.at(1).size()-1);
    //let's explain it:
    /*
    matrice.at(1).at(matrice.at(1).size()-1)
    
    for the first matrice.at(1)  is to acceed to the second vector,
    then to take the position of last element of that vector
    

    */
    return 0;
}
