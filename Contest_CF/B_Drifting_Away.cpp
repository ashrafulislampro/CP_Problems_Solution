#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    bool pos = (str.find("**") != string::npos) || (str.find("*<") != string::npos) || (str.find(">*") != string::npos) || (str.find("><") != string::npos);

    if (pos)
    {
        cout << -1 << endl;
        return;
    }

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '<')
        {
            c1++;
        }
        if (str[i] == '*')
        {
            c2++;
        }
        if (str[i] == '>')
        {
            c3++;
        }
    }
    cout << max(c1 + c2, c2 + c3) << endl;
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