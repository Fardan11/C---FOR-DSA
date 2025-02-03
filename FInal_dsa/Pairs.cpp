#include <bits/stdc++.h>

using namespace std;

// sort pairs
bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    // sort w the func
    sort(A.begin(), A.end(), cmp);

    for (size_t i = 0; i < A.size(); i++)
    {
        cout << A[i].first << " " << A[i].second << endl;
    }

    return 0;
}
