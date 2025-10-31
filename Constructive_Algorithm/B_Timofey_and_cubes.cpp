#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    for (int i = 0, j = n - 1; i <= j; i += 2, j -= 2)
    {
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }
    for (auto val : v)
        cout << val << " ";
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