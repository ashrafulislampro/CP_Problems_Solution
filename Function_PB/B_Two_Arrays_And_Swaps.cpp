#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), vec(n);
    for (auto &x : v)
        cin >> x;
    for (auto &x : vec)
        cin >> x;

    sort(v.begin(), v.end());
    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < k; i++)
    {
        int a_v = v[i];
        int b_v = vec[i];

        if (b_v > a_v)
        {
            v[i] = b_v;
            vec[i] = a_v;
        }
    }
    int sum_a = 0;
    for (int i = 0; i < n; i++)
    {
        sum_a += v[i];
    }

    cout << sum_a << endl;
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