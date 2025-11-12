#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll B;
    cin >> B;

    for (ll i = 1; i <= 15; i++)
    {
        ll sum = 1, A = i;
        for (ll j = 1; j <= i; j++)
        {
            sum *= A;
        }
        if (sum == B)
        {
            cout << A << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}