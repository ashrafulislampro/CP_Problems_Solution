#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    string s;
    cin >> s;

    string a, b, c = "";
    a = s[0];
    b = s[1];

    for (int i = 2; i < s.size() - 1; i++)
    {
        if (a >= b)
        {
            c += s[i];
        }
        else if (b > a)
        {
            b += s[i];
        }
    }
    c += s[s.size() - 1];

    if ((a <= b and c <= b) or (b <= a and b <= c))
        cout << a << " " << b << " " << c << endl;
    else
        cout << ":(" << endl;
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