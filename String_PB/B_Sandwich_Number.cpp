#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    bool flg = true;
    cin >> str;

    if (str.size() != 8)
    {
        cout << "No\n";
        return;
    }
    if (!isupper(str[0]) || !isupper(str[7]))
        flg = false;
    for (int i = 1; i < 7; i++)
    {
        if (!isdigit(str[i]))
            flg = false;
    }
    if (str[1] == '0')
        flg = false;

    if (flg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}