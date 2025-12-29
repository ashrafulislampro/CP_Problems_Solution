#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;

    ll sum = 0;
    ll mn_a = *min_element(A.begin(), A.end());
    ll mn_b = *min_element(B.begin(), B.end());
    for (int i = 0; i < n; i++)
    {
        sum += max(A[i] - mn_a, B[i] - mn_b);
    }
    cout << sum << endl;
}
int32_t main()
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