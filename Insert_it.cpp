#include <bits/stdc++.h>
using namespace std;

int main()

{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    int M;
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    int X;
    cin >> X;

    A.insert(A.begin() + X, B.begin(), B.end());

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}