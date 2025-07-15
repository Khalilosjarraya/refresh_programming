/*
problem:
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
Hello world!
****************
* Hello world! *
****************
02 Test 2
Input
Expected output
Can you do it?
******************
* Can you do it? *
******************
03 Test 3
Input
Expected output
CodinGame is cool!
**********************
* CodinGame is cool! *
**********************
04 Test 4
Input
Expected output
1234567890
**************
* 1234567890 *
**************
*/
#include <iostream>
#include <string>

using namespace std;

void print_etoile(string a)
{
    int size_strin = a.length(), final_size{size_strin + 4};
    for(int i =0; i< final_size; i++)
    {
        cout<<"*";
    }
    cout << endl;
}

int main()
{
    string a;
    getline(cin, a);
    print_etoile(a);
    string new_result = "* " + a + " *";
    cout<<new_result<<endl;
    print_etoile(a);

    
}