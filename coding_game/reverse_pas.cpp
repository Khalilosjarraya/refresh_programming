/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
5 2
0 2 4 6 8
02 Test 2
Input
Expected output
5 3
0 3 6 9 12
03 Test 3
Input
Expected output
3 0
0 0 0
04 Test 4
Input
Expected output
8 11
0 11 22 33 44 55 66 77
*/
#include <iostream>

using namespace std;


int main()
{
    int n;
    int r;
    cin >> n >> r; cin.ignore();
    int sum = 0;
    for(int i=0; i<n; i++)
        if(i!=0 )
        {
            sum += r;
            cout << sum;
            if(i!=n-1)
                cout <<" ";
        }
        else
            cout << "0 ";
}