#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    for (auto val : v)
    {
        cout << (n + 1) - val << " ";
    }
    cout << endl;
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