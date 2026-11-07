#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str, ans = "", tmp = "";
    cin >> str;
    int max_cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        tmp = string() + str[i] + str[i + 1];
        size_t pos = str.find(tmp);

        int cnt = 0;
        while (pos != string::npos)
        {
            cnt++;
            pos = str.find(tmp, pos + 1);
        }
        if (cnt > max_cnt)
        {
            max_cnt = cnt;
            ans = tmp;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}