#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, k;
    cin >> n >> k;
    set<ll> st, ans, fullA;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    fullA = st;
    while (!st.empty())
    {
        int val = *st.begin();
        for (int i = 1; i * val <= k; i++)
        {
            if (!fullA.count(i * val))
            {
                cout << -1 << endl;
                return;
            }
            st.erase(i * val);
        }
        ans.insert(val);
    }
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it << " ";
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