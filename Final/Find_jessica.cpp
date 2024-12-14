#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[1001];
    getline(cin, s);

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
