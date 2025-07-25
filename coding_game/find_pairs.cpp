#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> all_numbers;
int main()
{
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card; cin.ignore();
        all_numbers.push_back(card);
    }
    int numbers_pair{0};
    for (int &element : all_numbers)
    {
        for(int j=0; j<5;j++)
        {
            if(element)
            {

            }
        }

    }

    cout << "runs" << endl;
}