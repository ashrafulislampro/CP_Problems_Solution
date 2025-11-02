#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    
    
    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
    }
    else if (v[0] == 1 || v[n - 1] == n)
    {
        cout << 1 << endl;
    }
    else if (v[0] == n && v[n - 1] == 1)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
}
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