#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int ans = 0;

    // substring count before modification
    for (int i = 0; i <= n - 3; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
            ans++;
    }
    int xi;
    char ch;
    while (q--)
    {
        cin >> xi >> ch;
        xi--;
        // remove old contributions
        for (int k = 0; k < 3; k++)
        {
            int idx = xi - k;
            if (idx >= 0 and idx + 2 < n)
            {
                if (s[idx] == 'A' && s[idx + 1] == 'B' && s[idx + 2] == 'C')
                    ans--;
            }
        }

        s[xi] = ch;
        // update contributions
        for (int k = 0; k < 3; k++)
        {
            int idx = xi - k;
            if (idx >= 0 and idx + 2 < n)
            {
                if (s[idx] == 'A' && s[idx + 1] == 'B' && s[idx + 2] == 'C')
                    ans++;
            }
        }
    cout << ans << endl;

    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}