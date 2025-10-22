#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    string str = to_string(n);
    int cnt = 0;
    for (auto val : str)
    {
        if (val != '0')
            cnt++;
    }
    return cnt == 1;
}
vector<int> v;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    for (auto x : v)
    {
        if (x <= n)
            ans++;
        else
            break;
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    for (int i = 1; i < 1000000; i++)
    {
        if (check(i))
            v.push_back(i);
    }
    
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}