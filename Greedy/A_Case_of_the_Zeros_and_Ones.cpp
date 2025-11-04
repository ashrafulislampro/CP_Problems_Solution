#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cnt_1 = 0, cnt_0 = 0;
    cin >> n;
    string str;
    cin >> str;
    for (auto val : str)
    {
        if (val == '1')
            cnt_1++;
        else
            cnt_0++;
    }
    if (cnt_1 >= cnt_0)
    {
        cout << cnt_1 - cnt_0 << endl;
    }
    else
    {
        cout << cnt_0 - cnt_1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}