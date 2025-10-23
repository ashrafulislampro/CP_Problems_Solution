#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            cnt0++;
        if (str[i] == '1')
            cnt1++;
    }
    if (cnt0 == 0 && cnt1 > 0)
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