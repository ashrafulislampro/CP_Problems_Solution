#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        set<int> st, ja_st, ji_st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
            ja_st.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
            ji_st.insert(x);
        }
        int ans = 0;
        for (auto val : st)
        {
            if (ja_st.count(val) && ji_st.count(val))
            {
                ans++;
            }
        }
        cout << ans << endl;
    };
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}