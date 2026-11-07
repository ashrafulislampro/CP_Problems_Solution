#include <bits/stdc++.h>
using namespace std;
#define int long long

int get(vector<int> a)
{
    if (a.empty())
        return 0;

    int pos = (int)a.size() / 2, val = 0;
    for (int i = 0; i < a.size(); i++)
    {
        val += abs(a[pos] - a[i]) - abs(pos - i);
    }
    return val;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;

        if (c == 'a')
        {
            a.push_back(i);
        }
        else
        {
            b.push_back(i);
        }
    }
    cout << min(get(a), get(b)) << endl;
}
int32_t main()
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