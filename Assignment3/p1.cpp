#include <bits/stdc++.h>
using namespace std;

bool Same(stack<int> s, queue<int> q)
{
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return s.empty() && q.empty();
}

int main()
{
    int N, M;
    cin >> N >> M;
    stack<int> s;
    queue<int> q;
    int val;

    // S
    for (int i = 0; i < N; i++)
    {
        cin >> val;
        s.push(val);
    }

    // Q
    for (int i = 0; i < M; i++)
    {
        cin >> val;
        q.push(val);
    }

    if (Same(s, q))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
