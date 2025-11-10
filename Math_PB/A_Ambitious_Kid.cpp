#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int min_val = INT_MAX;

    for (auto it = v.begin(); it != v.end();)
    {
        if (abs(*it) < min_val)
            min_val = abs(*it);
        it++;
    }
    cout << min_val << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}