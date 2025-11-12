#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mn_flip = 0, cnt_00 = 0, cnt_11 = 0;
    cin >> n;
    string str;
    cin >> str;

    size_t pos_0 = str.find("00");
    size_t pos_1 = str.find("11");

    while (pos_0 != string::npos)
    {
        cnt_00++;
        pos_0 = str.find("00", pos_0 + 1);
    }
    while (pos_1 != string::npos)
    {
        cnt_11++;
        pos_1 = str.find("11", pos_1 + 1);
    }

    if (n == 2 && cnt_00 == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (cnt_11 >= cnt_00)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (str[i - 1] == '0' && str[i] == '0' && str[i + 1] == '0')
        {
            str[i] = '1';
            cnt_00 = max(0, cnt_00 - 2);
            mn_flip++;
        }
        else if (str[i - 1] == '0' && str[i] == '0')
        {
            str[i] = '1';
            cnt_00 = max(0, cnt_00 - 1);
            mn_flip++;
        }

        if (cnt_11 >= cnt_00)
        {
            cout << mn_flip << endl;
            return;
        }
    }

    cout << mn_flip << endl; // ensure output always happens
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
}
