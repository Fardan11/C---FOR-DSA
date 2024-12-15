#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int flag = 0;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        {
            for (int i = 1; i < N; i++)
            {
                if (A[i - 1] > A[i])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
        }
    }
    return 0;
}