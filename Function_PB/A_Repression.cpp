#include <bits/stdc++.h>
using namespace std;

void solve()
{

    vector<int> v(3);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    cout << v[1] + v[2] << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}