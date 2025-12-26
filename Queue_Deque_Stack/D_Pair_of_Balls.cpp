#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    queue<int> que;
    vector<queue<int>> A(m);
    vector<vector<int>> mem(n);
    int k, a;
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> a;
            A[i].push(a - 1);
        }
        mem[A[i].front()].push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (mem[i].size() == 2)
        {
            que.push(i);
        }
    }
    while (!que.empty())
    {
        int now = que.front();
        que.pop();
        for (auto p : mem[now])
        {
            A[p].pop();
            if (!A[p].empty())
            {
                mem[A[p].front()].push_back(p);
                if (mem[A[p].front()].size() == 2)
                {
                    que.push(A[p].front());
                }
            }
        }
    }

    for (auto p : A)
    {
        if (!p.empty())
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}