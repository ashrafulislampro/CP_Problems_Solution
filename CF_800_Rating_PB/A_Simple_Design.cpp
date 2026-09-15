#include <bits/stdc++.h>
using namespace std;
long sum(long num)
{
    long add = 0;
    while (num != 0)
    {
        long rem = num % 10;
        add += rem;
        num /= 10;
    }
    return add;
}
void solve()
{
    long n, m;
    cin >> n >> m;

    if (sum(n) % m == 0)
    {
        cout << n << endl;
    }
    else
    {

        while (true)
        {
            long tmp = sum(++n);
            if (tmp % m == 0)
            {
                cout << n << endl;
                return;
            }
        }
    }
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