#include <bits/stdc++.h>
using namespace std;
int T, n, a[200005], tot1, tot2;
bool flg;
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        flg = 0;
        tot1 = 0;
        tot2 = -n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1)
                tot1++;
            else
                tot1--;
            if (a[i] != 3)
                tot2++;
            else
                tot2--;
            if (tot2 >= 0)
                flg = 1;
            if (tot1 >= 0)
                tot2 = 0;
        }
        (flg) ? cout << "YES\n" : cout << "NO\n";
    }
}