#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<pair<string, string>> st;
    string l, c;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> c;
        st.insert({l, c});
    }
    cout << st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}