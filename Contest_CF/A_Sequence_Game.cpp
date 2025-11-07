#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, x2;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> x2;
    sort(v.begin(), v.end(), greater<>());

    while (v.size() > 2)
    {
        int min_ele = min(v[v.size() - 1], v[v.size() - 2]);
        v[v.size() - 2] = min_ele;
        v.pop_back();
    }
    
    if (v[1] <= x2 && x2 <= v[0])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}