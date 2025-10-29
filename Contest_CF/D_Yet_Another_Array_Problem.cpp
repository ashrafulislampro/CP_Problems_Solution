#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (auto &x : v)
        cin >> x;

    bool flg = true;
    long long ans = 0;
    for (long long i = 0; i < n && flg; i++)
    {
        for (long long j = 2; j <= 100000; j++)
        {

            if (gcd(j, v[i]) == 1)
            {
                ans = j;
                flg = false;
                break;
            }
        }
    }
    if (flg)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
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