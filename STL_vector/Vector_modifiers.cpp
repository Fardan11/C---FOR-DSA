#include <bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v = {1, 2, 3, 2, 5, 2};
    vector<int> v3 = {100,
                      200,
                      300};
    // vector<int> v2;
    // v2 = v1;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // shortcut

    // for (int x : v2)
    // {
    //     cout << x << endl;
    // }

    // v1.pop_back();

    // v1.insert(v1.begin() + 2, 100);
    // v1.insert(v1.begin() + 2, v3.begin(), v3.end());
    // v1.erase(v1.begin() + 2);

    // Replace
    //  replace(v.begin(), v.end() - 1, 2, 100);

    // Find

    // auto it = find(v.begin(), v.end(), 100);

    // if (it == v.end())
    // {
    //     cout << "not found" << " ";
    // }
    // else
    // {
    //     cout << "found" << " ";
    // }

    // Accessing
    // cout << v[2] << endl;
    // cout << v.front() << endl;
    // cout << v.back() << endl;

    // Iterators

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}