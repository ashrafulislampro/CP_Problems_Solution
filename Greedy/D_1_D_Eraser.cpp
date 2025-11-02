#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
            v.push_back(i);
    }

    int cnt = 0;
    for (auto it = v.begin(); it != v.end();)
    {
        cnt++;
        int current = *it;
        it++;
        while (it != v.end() && *it - current < k)
            ++it;
    }
    cout << cnt << endl;
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