#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[k]{}, p = 0;

    if (k & 1)
    {
        for (int i = 0; i < k; i++)
            a[i] = n;
    }
    else
    {
        for (int i = 30; i >= 0; i--)
        {
            if (n >> i & 1)
            {
                for (int j = 0; j < k; j++)
                {
                    if (j != min(p, k - 1))
                        a[j] += (1 << i);
                }
                if (p < k)
                    p++;
            }
            else
            {
                for (int j = 0; j < p / 2 * 2; j++)
                {
                    a[j] += (1 << i);
                }
            }
        }
    }
    for (int i = 0; i < k; i++)
        cout << a[i] << (i + 1 == k ? '\n' : ' ');
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