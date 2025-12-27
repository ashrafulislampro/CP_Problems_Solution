#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    for (int i = n - 1, j = n - 2; j >= 0; i--, j--)
    {
        if (abs(v[i] - v[j]) <= 1)
        {
            v.pop_back();
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (v.size() == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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