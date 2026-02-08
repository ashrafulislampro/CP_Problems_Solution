#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
bool isOk(string s)
{
    int len = s.size();
    if ((s[0] == '2' and s[1] == '0' and s[2] == '2' and s[3] == '0') || (s[0] == '2' and s[1] == '0' and s[2] == '2' and s[len - 1] == '0') || (s[0] == '2' and s[1] == '0' and s[len - 2] == '2' and s[len - 1] == '0') || (s[0] == '2' and s[len - 3] == '0' and s[len - 2] == '2' and s[len - 1] == '0') || (s[len - 4] == '2' and s[len - 3] == '0' and s[len - 2] == '2' and s[len - 1] == '0'))
    {
        return true;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i <= 4; i++)
    {

        if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020")
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}