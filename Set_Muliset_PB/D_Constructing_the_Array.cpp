#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<pair<int, int>> st;
    st.insert({-n, 0});
    int i = 0;
    while (st.size())
    {
        auto [x, y] = *st.begin();
        st.erase(st.begin());
        x = -x;
        i++;
        if (x % 2)
        {
            v[y + x / 2] = i;
            int sz = x / 2;
            if (sz == 0)
                continue;
            st.insert({-sz, y});
            st.insert({-sz, y + x / 2 + 1});
        }
        else
        {
            v[y + x / 2 - 1] = i;
            int sz = x / 2;
            st.insert({-sz, y + x / 2});
            sz--;
            if (sz == 0)
                continue;
            st.insert({-sz, y});
        }
    }
    for (auto val : v)
        cout << val << " ";
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