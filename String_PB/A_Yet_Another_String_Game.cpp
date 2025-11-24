#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if ((i + 1) % 2 == 1)
        {
            if (str[i] == 'a')
                str[i] = 'b';
            else if (str[i] != 'a')
                str[i] = 'a';
        }
        else
        {
            if (str[i] == 'z')
                str[i] = 'y';
            else if (str[i] != 'z')
                str[i] = 'z';
        }
    }
    cout << str << endl;
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