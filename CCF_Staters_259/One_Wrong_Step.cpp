#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define ASHRAFUL                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, x = 0, y = 0;
    string s;

    cin >> n >> s;

    for (char c : s)
    {
        if (c == 'U')
            y++;
        if (c == 'D')
            y--;
        if (c == 'R')
            x++;
        if (c == 'L')
            x--;
    }

    if ((abs(x) == 2 and y == 0) || (x == 0 and abs(y) == 2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ASHRAFUL

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}