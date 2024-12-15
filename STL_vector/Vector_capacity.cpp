#include <bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // if the capacity is crossed it gets
    // doubled

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;

    return 0;
}