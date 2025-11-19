#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n);

    while (q--)
    {
        int op, t, x;
        cin >> op;

        if (op == 0)
        {
            cin >> t >> x;
            v[t].push_back(x);
        }
        else if (op == 1)
        {
            cin >> t;
            int len = v[t].size();
            if (len > 0)
            {
                for (int i = 0; i < len; i++)
                {
                    cout << v[t][i];
                    if (i < len - 1)
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            else
            {
                cout << endl;
            }
        }
        else if (op == 2)
        {
            cin >> t;
            v[t].erase(v[t].begin(), v[t].end());
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}