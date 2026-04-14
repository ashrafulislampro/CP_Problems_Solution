#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n = 3, cnt_a = 0, cnt_b = 0, cnt_c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'A')
                cnt_a++;
            if (ch == 'B')
                cnt_b++;
            if (ch == 'C')
                cnt_c++;
        }
    }

    if (!(cnt_a & 1))
    {
        cout << 'A' << endl;
    }
    if (!(cnt_b & 1))
    {
        cout << 'B' << endl;
    }
    if (!(cnt_c & 1))
    {
        cout << 'C' << endl;
    }
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
// Coded by Ashraful Islam @ml.ashraful37