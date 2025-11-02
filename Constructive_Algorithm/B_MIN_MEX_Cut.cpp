#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int len = str.size(), i;
    for (i = 0; i < len; i++)
    {
        if (str[i] == '0')
            break;
    }
    if (i == len)
    {
        cout << 0 << endl;
        return;
    }
    for (; i < len; i++)
        if (str[i] == '1')
            break;
    for (; i < len; i++)
        if (str[i] == '0')
            break;

    if (i == len)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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