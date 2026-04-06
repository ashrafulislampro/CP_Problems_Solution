#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void maximizingXor(int l, int r)
{
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            int val = i ^ j;
            ans = max(ans, val);
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    int l, r;
    cin >> l >> r;
    maximizingXor(l, r);

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37