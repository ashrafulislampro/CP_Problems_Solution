#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    while (cin >> n)
    {
        string cl;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> cl;
            mp[cl]++;
        }
        int cnt = INT_MIN;
        for (auto [key, val] : mp)
        {
            if (val > cnt)
            {
                cnt = val;
                cl = key;
            }
        }
        cout << cl << endl;
    };
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}