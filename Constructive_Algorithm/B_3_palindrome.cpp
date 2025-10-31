#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cnt_a = 2, cnt_b = 2;
    cin >> n;
    string str = "";
    bool flg = true;
    for (int i = 1; i <= n; i++)
    {
        if (flg)
        {
            str += "a";
            if (--cnt_a == 0)
            {
                flg = false;
                cnt_a = 2;
            };
        }
        else if (!flg)
        {
            str += "b";
            if (--cnt_b == 0)
            {
                flg = true;
                cnt_b = 2;
            };
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

    solve();
    return 0;
}