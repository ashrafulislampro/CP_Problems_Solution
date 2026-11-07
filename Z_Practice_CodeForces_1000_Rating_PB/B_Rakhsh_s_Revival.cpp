#include <bits/stdc++.h>

using namespace std;

const int xn = 2e5 + 10;

int q, n, m, k, ps[xn];
string s;

int main()
{
    cin >> q;
    while (q--)
    {
        cin >> n >> m >> k >> s;
        fill(ps, ps + n, 0);
        int ans = 0, cnt = 0, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += ps[i];
            if (sum || s[i] == '1')
                cnt = 0;
            else
            {
                cnt++;
                if (cnt == m)
                {
                    sum++, ans++, cnt = 0;
                    if (i + k < n)
                        ps[i + k]--;
                }
            }
        }
        cout << ans << "\n";
    }
}