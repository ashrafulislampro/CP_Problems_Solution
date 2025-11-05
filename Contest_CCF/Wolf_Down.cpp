#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == '1' && str[i + 1] == '0')
        {
            str[i + 1] = '1';
        }
    }
    cout << count(str.begin(), str.end(), '0') << endl;
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