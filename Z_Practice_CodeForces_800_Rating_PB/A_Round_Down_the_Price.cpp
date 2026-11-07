#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, round_num = 0, min_val = INT_MAX;
    cin >> n;
    for (int i = 0; i <= 9; i++)
    {
        round_num = pow(10, i);
        if (round_num > n)
            break;
        if (n - round_num < min_val)
        {
            min_val = n - round_num;
        }
    }
    cout << min_val << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}