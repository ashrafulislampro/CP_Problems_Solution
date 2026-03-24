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
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    int ans = 0;

    while (st.size() >= 2)
    {
        auto it = prev(st.end());
        int val = *it;
        auto itt = prev(it);
        int val2 = *itt;
        st.erase(it);
        st.erase(itt);
        if (val == 0 || val2 == 0)
        {
            break;
        }
        val--;
        val2--;
        ans++;
        st.insert(val);
        st.insert(val2);
    }
    cout << ans << endl;
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
// Coded by Ashraful Islam @ml.ashraful37