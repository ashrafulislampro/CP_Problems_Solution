#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (str == "yes")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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