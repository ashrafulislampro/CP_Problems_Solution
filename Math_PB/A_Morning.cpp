#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int sum = 0, zero = 10;
    if (str[0] == '0')
    {
        sum += 10;
    }
    else
    {
        sum += str[0] - '0';
    }
    // cout << sum << endl;
    for (int i = 1; i < 4; i++)
    {
        if (str[i] == '0')
        {
            sum += abs(11 - ((str[i - 1] - '0') == 0 ? 10 : (str[i - 1] - '0')));
        }
        else
        {
            sum += abs(((str[i - 1] - '0') == 0 ? 10 : (str[i - 1] - '0')) - (str[i] - '0')) + 1;
        }
    }
    cout << sum << endl;
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