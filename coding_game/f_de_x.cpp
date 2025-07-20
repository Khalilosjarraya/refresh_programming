/*
The program:
Your program must compute the value of a linear function at the given points.

A linear function is of the form f(x) = a * x + b, with a and b, two constant values. You are given the values a, b and a set of N values of x. You must compute the value of f(x) for each of the N values of x.

INPUT:
Line 1 : two space-separated integers a and b
Line 2 : an integer N
N next lines : an integer x on each line

OUTPUT:
N lines : the value of f(x) for each x value given as input

CONSTRAINTS:
-100 < a, b < 100
-100 < x < 100

EXAMPLE:
Input
5 -2
3
3
8
-1
Output
13
38
-7
 */
#include <iostream>

using namespace std;


int main()
{
    int a;
    int b;
    cin >> a >> b; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; cin.ignore();
        cout << a*x +b << endl;
    }

    
}