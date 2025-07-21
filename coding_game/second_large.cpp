/*
problem
Three numbers A, B and C are the inputs. Write a program to find second largest among them.
Input
Line 1: N is an Integer
Next N lines: A, B, C are Integers.
Output
N lines: the second largest among A, B and C
Constraints
-10,000,000 ≤ A, B, C ≤ 1,000,000
Example
Input
1
10 3 450
Output
10
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int a;
        int b;
        int c;
        cin >> a >> b >> c; cin.ignore();
        int arr[3] ={a,b,c};
        sort(arr, arr+3);
        cout << arr[1]<<endl;
    }
}