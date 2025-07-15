/*
problem:
we have an input that contains digits we want an output without digits
*/

#include <iostream>
#include <string>

int main()
{
    string s, result{};
    getline(cin, s);
    
    cout << s << endl;
    for (auto &i : s) {
        if(!isdigit(i))
        {
            result +=i;
        }
}

    cout << result << endl;
    return 0;
}