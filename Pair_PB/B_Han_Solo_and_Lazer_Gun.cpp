#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x0, y0;
    cin >> n >> x0 >> y0;

    set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x -= x0;
        y -= y0;
        int g = __gcd(x, y);
        st.insert({y / g, x / g});
    }
    cout << st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}