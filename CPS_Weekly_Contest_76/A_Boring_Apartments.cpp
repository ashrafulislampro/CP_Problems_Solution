#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<int, int> mp;
#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int x;
    cin >> x;
    int num = mp[x];
    int rem = num % 4;
    int divide = num / 4;
    int total = divide * 10;

    if (rem == 1)
        total += 1;
    else if (rem == 2)
        total += 3;
    else if (rem == 3)
        total += 6;

    cout << total << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1, cnt = 0;
    cin >> T;
    for (int i = 1; i <= 9; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 4; j++)
        {
            sum = (sum * 10) + i;
            mp[sum] = ++cnt;
        }
    }
    // for (auto [key, val] : mp)
    // {
    //     cout << key << " " << val << endl;
    // }
    while (T--)
        solve();
    return 0;
}