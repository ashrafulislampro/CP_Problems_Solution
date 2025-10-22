#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    vector<char> v = {'a', 'b', 'c'};
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (str[i] != v[i])
            cnt++;
    }
    if (cnt > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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