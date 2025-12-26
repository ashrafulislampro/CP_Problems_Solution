#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    stack<pair<int, int>> st;
    st.push({0, 0});
    while (n--)
    {
        int type, x;
        cin >> type;

        if (type == 1)
        {
            cin >> x;
            int mx = max(x, st.top().second);
            st.push({x, mx});
        }
        else if (type == 2)
        {
            st.pop();
        }
        else
        {
            cout << st.top().second << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();

    return 0;
}