#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > 0 && odd > 0)
    {
        sort(v.begin(), v.end());
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    else
    {
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
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