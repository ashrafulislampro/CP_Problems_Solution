#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n;
    vector<int> A(n), B(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A[i] = x;
        B[i] = x;
    }
    if (is_sorted(A.begin(), A.end()))
    {
        cout << 0 << endl;
        return;
    }

    sort(B.begin(), B.end());
    for (int i = 0; i < n; i++)
    {
        mp[A[i]] = i + 1;
    }

    vector<pair<int, int>> pr;
    for (int i = 0; i < n - 1; i++)
    {
        int pos = mp[B[i]];

        if (i + 1 == pos)
            continue;
        mp[A[i]] = pos;
        mp[A[pos - 1]] = i + 1;
        swap(A[i], A[pos - 1]);

        if (i + 1 < pos)
            pr.push_back({i + 1, pos});
        else
            pr.push_back({pos, i + 1});        
    }

    cout << pr.size() << endl;
    for (auto [f, s] : pr)
    {
        cout << f << " " << s << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}