#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int flag = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // sort
    sort(A, A + N);

    // values compare
    for (int i = 1; i < N; i++)
    {
        if (A[i] == A[i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
