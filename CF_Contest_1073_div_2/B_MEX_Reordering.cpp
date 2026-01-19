#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, x;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    if (freq[0] == 1)
    {
        cout << "YES" << endl;
    }
    else if (freq[0] > 1 and freq[1] >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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