#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 0, x;
    cin >> n;
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans++;
        if (st.size() == 0)
        {
            st.push({x, 1});
            cout << ans << endl;
            continue;
        }
        auto [y, cnt] = st.top();
        if (y == x)
        {
            st.pop();
            cnt++;
            if (cnt != x)
            {
                st.push({x, cnt});
            }
            else
            {
                ans -= x;
            }
        }
        else
        {
            st.push({x, 1});
        }
        cout << ans << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}