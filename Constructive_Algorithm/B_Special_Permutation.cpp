#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> v(n);
    v[0] = a;
    v[n - 1] = b;
    int val = n;
    for (int i = 1; i < n - 1;)
    {
        if (val == a || val == b)
        {
            val--;
            continue;
        }
        else
        {
            v[i] = val;
            val--;
            i++;
        }
    }
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = n / 2; i < n; i++)
    {
        if (v[i] > max_val)
            max_val = v[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] < min_val)
            min_val = v[i];
    }
    if (min_val != a || max_val != b)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto val : v)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}