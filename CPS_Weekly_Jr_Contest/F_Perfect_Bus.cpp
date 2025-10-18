#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    if (!(cin >> N))
        return;
    long long total = 0;
    long long pref = 0;
    long long min_pref = LLONG_MAX;
    for (int i = 0; i < N; ++i)
    {
        long long a;
        cin >> a;
        pref += a;
        if (min_pref == LLONG_MAX)
            min_pref = pref;
        else
            min_pref = min(min_pref, pref);
        total += a;
    }
    if (min_pref == LLONG_MAX)
        min_pref = 0;
    long long x = max(0LL, -min_pref);
    cout << (x + total) << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
