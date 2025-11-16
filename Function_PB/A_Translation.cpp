#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());

    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}