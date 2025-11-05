#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, p, min_price = INT_MAX, sum = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> p;
        if (p < min_price)
            min_price = p;
        v.push_back(a * min_price);
    }
    for (auto val : v)
    {
        sum += val;
    }
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}