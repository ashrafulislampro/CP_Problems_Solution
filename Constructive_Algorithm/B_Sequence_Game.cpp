#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), vec;
    for (auto &x : v)
        cin >> x;
    vec.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        int num = v[i];
        if (num >= vec.back())
        {
            vec.push_back(num);
        }
        else
        {
            vec.push_back(num);
            vec.push_back(num);
        }
    }
    cout << vec.size() << endl;
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
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