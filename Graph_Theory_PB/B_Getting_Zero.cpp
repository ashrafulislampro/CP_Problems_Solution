#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    const int MOD = 32768;

    while (n--)
    {
        int x;
        cin >> x;
        int ans = 1e9;

        for (int add = 0; add <= 15; add++)
        {
            int y = (x + add) % MOD;
            if (y == 0)
            {
                ans = min(ans, add);
                continue;
            }
            // count how many times we need to multiply by 2
            int mul = 0;
            while ((y << mul) % MOD != 0 && mul <= 15)
                mul++;
            if (mul <= 15)
                ans = min(ans, add + mul);
        }
        cout << ans << " ";
    }
    cout << "\n";
}
