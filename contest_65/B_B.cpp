#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a_cnt = 0, b_cnt = 0;
    cin >> n;
    string str, Alice = "S", Bob = "R";
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A' && Alice == "S")
        {
            a_cnt++;
            Bob = "R";
        }
        else if (str[i] == 'B' && Bob == "S")
        {
            b_cnt++;
            Alice = "R";
        }

        if (str[i] == 'B')
        {
            Bob = "S";
            Alice = "R";
        }
        if (str[i] == 'A')
        {
            Alice = "S";
            Bob = "R";
        }
    }
    cout << a_cnt << " " << b_cnt << endl;
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