#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 1; i <= k; i++)
    {
        v[n - 1] = n;
        n--;
    }
    for (int i = n; i >= 1; i--)
    {
        v[i - 1] = n - i + 1;
    }
    for (auto val : v)
        cout << val << " ";
    cout << endl;
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