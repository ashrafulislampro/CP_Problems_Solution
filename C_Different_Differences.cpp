
#include <bits/stdc++.h>
using namespace std;

vector<int> construct(int f, int k)
{
    vector<int> d;
    for (int i = 0; i < k; i++)
    {
        d.push_back(i < f - 1 ? i + 2 : 1);
    }
    return d;
}

void solve()
{
    int k, n;
    cin >> k >> n;

    int ans = 1;

    for (int f = 1; f < k; f++)
    {
        vector<int> d = construct(f, k - 1);

        int sum = accumulate(d.begin(), d.end(), 0);

        if (sum <= n - 1)
        {
            ans = f;
        }
    }

    vector<int> res = {1};
    vector<int> d = construct(ans, k - 1);

    for (int x : d)
    {
        res.push_back(res.back() + x);
    }

    for (int x : res)
    {
        cout << x << ' ';
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}