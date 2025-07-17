// You got a farm with fantastic creatures and a stock of food. You have to know if the stock is big enough to feed all creatures.

// Each creature takes a portion of food, except the troll. You MUST NOT feed the troll (cf RFC 8140, §2.1 : https://datatracker.ietf.org/doc/html/rfc8140#section-2.1 )
// Input
// 1st line: integer F is the number of portions in your stock of food
// 2nd line: integerN is the number of fantastic creatures
// next N lines: name of each creature
// Output
// Lot of food if your stock is sufficient to feed all creatures at least twice
// Just enough food if your stock is sufficient to feed all creatures
// Not enough food if not
// Constraints
// 0 <= F < 100
// 1 <= N < 100
// Creature names are uppercase and may contain spaces
// Example
// Input
// 4
// 2
// GNOME
// DWARF
// Output
// Lot of food

/*
my work which didn't work correctly:
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int f;
    cin >> f; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    int sum =n;
    for (int i = 0; i < n; i++) {
        string monster;
        getline(cin, monster);
        if(monster == "troll" || monster == "TROLL" )
            sum-=1;
    }
    if(f/sum>=2)
        cout << "Lot of food" << endl;
    else if(f/sum<2 && f/n >=1)
        cout << "Just enough food" << endl;
    else if(f/sum <1)
        cout << "Not enough food" << endl;
}

*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int F, N;
    std::cin >> F >> N;
    std::cin.ignore(); 

    int hungryCreatures = 0;

    for (int i = 0; i < N; ++i) {
        std::string name;
        std::getline(std::cin, name);

        // Remove leading/trailing spaces (optional, for robustness)
        name.erase(name.find_last_not_of(" \n\r\t")+1);
        name.erase(0, name.find_first_not_of(" \n\r\t"));

        if (name != "TROLL") {
            ++hungryCreatures;
        }
    }

    if (F >= 2 * hungryCreatures) {
        std::cout << "Lot of food" << std::endl;
    } else if (F >= hungryCreatures) {
        std::cout << "Just enough food" << std::endl;
    } else {
        std::cout << "Not enough food" << std::endl;
    }

    return 0;
}