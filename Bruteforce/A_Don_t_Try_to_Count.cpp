#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string str1, str2;
    cin >> str1 >> str2;
    int i = 5, cnt = 0;
    size_t pos = str1.find(str2);
    if (pos != string::npos)
    {
        cout << cnt << endl;
        return;
    }
    else
    {
        while (i-- && pos == string::npos)
        {
            str1 += str1;
            cnt++;
            pos = str1.find(str2);
            if (pos != string::npos)
            {
                cout << cnt << endl;
                return;
            }
        }
        cout << -1 << endl;
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