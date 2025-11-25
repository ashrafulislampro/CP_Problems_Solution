#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    bool flg = true;
    while (flg)
    {
        flg = false;
        int n = str.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                flg = true;
                str.erase(i, 2);
                break;
            }
        }
    }

    if (str.size() == 0)
    {
        cout << "Empty String" << endl;
    }
    else
    {
        cout << str << endl;
    }
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