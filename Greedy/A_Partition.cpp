#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum_b = 0, sum_c = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x >= 0)
        {
            sum_b += x;
        }
        else
        {
            sum_c += abs(x);
        }
    }
    cout << sum_b + sum_c << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}