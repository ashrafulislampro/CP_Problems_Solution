#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int cnt_0 = 0, cnt_1 = 0;

    for (auto val : str)
    {
        if (val == '0')
            cnt_0++;
        else
            cnt_1++;
    }

    int max_cnt = max(cnt_0, cnt_1);
    int min_cnt = min(cnt_0, cnt_1);

    if (max_cnt == cnt_0 && cnt_1 >= 2)
    {
        cout << 2 << endl;
    }
    else if (cnt_0 > 0 && cnt_1 == 0)
    {
        cout << 1 << endl;
    }
    else if (cnt_1 > 0 && cnt_0 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
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