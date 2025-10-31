#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, k, sqr_val;
    cin >> n;
    for (int i = 2; i <= 100; i++)
    {
        sqr_val = (pow(2, i) - 1);
        if (n % sqr_val == 0)
        {
            k = i;
            break;
        }
    }
    x = n / (pow(2, k) - 1);
    cout << x << endl;
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