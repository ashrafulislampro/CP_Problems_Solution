#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll s, b, d, g;
    cin >> s >> b;
    vector<ll> v(s), aux_arr;
    for (auto &x : v)
        cin >> x;
    vector<pair<ll, ll>> pr;

    for (int i = 0; i < b; i++)
    {
        cin >> d >> g;
        pr.push_back({d, g});
        aux_arr.push_back(d);
    }
    sort(pr.begin(), pr.end());
    sort(aux_arr.begin(), aux_arr.end());
    for (int i = 1; i < b; i++)
    {
        pr[i].second += pr[i - 1].second;
    }

    for (int i = 0; i < s; i++)
    {
        auto it = upper_bound(aux_arr.begin(), aux_arr.end(), v[i]) - aux_arr.begin();
        --it;
        if(it < pr.size())
            cout << pr[it].second << " ";
        else
            cout<<0<<" ";
    }
    
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37