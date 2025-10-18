#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    long long min_op = 0;
    int max_val = 0;
    for (auto x : v)
    {
        if (x > max_val)
        {
            max_val = x;
        }
        min_op += (max_val - x);
    }

    cout << min_op;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}