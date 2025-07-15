/*
reslove this problem in c++: 
Give the sum of the numbers from 1 to n, after sorting the digits in each number by ascending order.

The sorting of the digits in ascending order happens like this:
1 -> 1
23 -> 23
52 -> 25
10 -> 01 -> 1

Then, compute the sum from 1 to n. For n = 25, it gives:
sum = 1 + 2 + 3 + .. + 9 + 01 + 11 + 12 + ... + 19 + 02 + 12 + 22 + 23 + 24 + 25
Note that 10 became 01, 20 became 02 and 21 became 12. The rest of the numbers stayed the same (because their digits were already in ascending order).

*/

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

// function that sorts the number in ascendant way
int sorted_sum(int n)
{
    int sum {0};
    for(int i=1; i<=n; i++)
    {
        std::string s = std::to_string(i);
        std::sort(s.begin(), s.end());
        int sorted_mum = std::stoi(s);
        std::cout <<"sorted number "<<sorted_mum<<std::endl;
        sum += sorted_mum;
    }
    return sum;
}

int main()
{
    int n{0};
    std::cout<<"enter a number: "<< std::endl;
    std::cin >>n;
    std::cin.ignore();
    int sum = sorted_sum(n);
    std::cout << "This is the final sum: "<< sum << std::endl;
    return 0;
}