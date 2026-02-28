#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int k;
    cin >> k;
    // for duplicate value using set or multiset
    set<pair<int, int>> st;

    for (int i = 0; i < k; i++)
    {
        st.insert({v[i], i});
    }

    cout << st.begin()->first << " " << st.rbegin()->first << endl;
    for (int i = 0; i < n - k; i++)
    {
        st.erase(st.find({v[i], i}));
        st.insert({v[i + k], i + k});
        cout << st.begin()->first << " " << st.rbegin()->first << endl;
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