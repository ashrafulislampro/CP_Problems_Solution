#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, n;
    cin >> h >> n;
    long long sum = 0, x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x;
    }
    if (h - sum <= 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}