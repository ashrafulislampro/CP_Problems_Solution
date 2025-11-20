#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), vec;
    for (auto &x : v)
        cin >> x;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            ans++;
            continue;
        }
        else if (v[i - 1] > v[i])
        {
            vec.push_back(ans);
            ans = 1;
            continue;
        }
    }
    vec.push_back(ans);
    sort(vec.begin(), vec.end(), greater<>());
    cout << vec[0] << endl;
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