#include <iostream>

using namespace std;


int main()
{

    // game loop
    while (1) {
        int max{0}, index{0};
        for (int i = 0; i < 8; i++) {
            int mountain_h; 
            cin >> mountain_h; cin.ignore();
            if(mountain_h >= max)
            {
                max = mountain_h;
                index = i;
            }
        }


        cout << index << endl; // The index of the mountain to fire on.
    }
}