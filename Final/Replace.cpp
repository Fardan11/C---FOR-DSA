// #include <bits/stdc++.h>
// using namespace std;

// int main()

// {

//     int t;
//     cin >> t;
//     cin.ignore();

//     while (t--)
//     {
//         string S;
//         string X;

//         getline(cin, S);
//         getline(cin, X);

//         for (size_t pos = 0; pos < S.size(); pos++)
//         {
//             if (S.substr(pos, X.size()) == X)
//             {
//                 S.replace(pos, X.size(), "#");
//                 pos += X.size();
//             }
//             else
//             {
//                 pos++;
//             }
//         }
//         cout << S << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string S, X;

        Cin >> S >> X;

        for (size_t pos = 0; pos < S.size(); pos++)
        {
            if (S.substr(pos, X.size()) == X)
            {
                S.replace(pos, X.size(), "#");
                pos += X.size() - 1; // Skip the length of X to avoid overlapping
            }
        }

        cout << S << endl;
        cout << X << endl; // Print the modified string
    }

    return 0;
}
