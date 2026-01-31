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
    int num = n, cnt = 0;
    for (int i = n, j = 1; i >= 1; i--, j++)
    {
        if (i == j)
        {
            cout << i - 1 << " ";
            cnt = 1;
        }
        else
        {
            if (cnt == 1)
            {
                cout << i + 1 << " ";
                cnt = 0;
            }
            else
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
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