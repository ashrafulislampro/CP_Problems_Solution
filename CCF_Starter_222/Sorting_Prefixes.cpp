#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (B[i] != A[i])
        {
            ans = A[i];
            break;
        }
    }
    cout << ans << endl;
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