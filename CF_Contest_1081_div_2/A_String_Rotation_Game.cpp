#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    string s, cpy;
    cin >> s;
    cpy = s;
    int cnt = 1, tmp = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
    }

    while (true)
    {
        tmp = 1;
        char ch = s[n - 1];
        s.pop_back();
        s = ch + s;
        
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                tmp++;
        }
        if (tmp > cnt)
            cnt = tmp;
        if (cpy == s)
            break;
    }
    cout << cnt << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37