/*
the problem:
The impostor wants to kill all the crewmates from his ship, but has a cooldown between each kill. Print if he can kill all the crewmates within the given time. If he doesn't manage to kill them all print the amount of extra time he needed, or if he kills them in time then print the remaining time he had to spare. The impostor starts with the cooldown.
Input
Line 1: An integer crewmate with the amount of crewmates.

Line 2: An integer time with the amount of time he has.

Line 3: An integer cooldown with the cooldown between each kill.
Output
Line 1: A string saying if the impostor managed to kill all the crewmates.

Line 2: A integer with the time he needed to kill all the crewmates or the time he spared.
Constraints
Example


Input
20
200
10
-------------------------
Output
True
0

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int crewmate;
    cin >> crewmate; cin.ignore();
    int time;
    cin >> time; cin.ignore();
    int cooldown;
    cin >> cooldown; cin.ignore();
    int number = time / cooldown;
    if(number >= crewmate )
    {
        cout << "True"<< endl;
        cout <<0<< endl;
    }
    else
    {
        cout << "False"<< endl;
        cout <<(cooldown * crewmate) - time<< endl;
    }

}