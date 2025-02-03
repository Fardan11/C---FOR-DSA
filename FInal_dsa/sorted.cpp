#include <bits/stdc++.h>

using namespace std;

void processList(const vector<int> &A)
{
    set<int> List(A.begin(), A.end());
    vector<int> sortedList(List.begin(), List.end());

    for (size_t i = 0; i < sortedList.size(); i++)
    {
        cout << sortedList[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }
        processList(A);
    }

    return 0;
}
