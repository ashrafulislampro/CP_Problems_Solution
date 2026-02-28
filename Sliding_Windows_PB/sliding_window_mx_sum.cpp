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
    // for duplicate value using multiset
    multiset<int> st;
    int sum = 0, mx = 0, tmp = 0;
    for (int i = 0; i < k; i++)
    {
        st.insert(v[i]);
        sum += v[i];
    }

    mx = sum;
    for (int i = 0; i < n - k; i++)
    {
        st.erase(st.find(v[i]));
        st.insert(v[i + k]);
        sum -= v[i];
        sum += v[i + k];
        // for (auto it = st.begin(); it != st.end(); it++)
        // {
        //     sum += *it;
        // }
        mx = max(mx, sum);
    }
    cout << mx << endl;
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