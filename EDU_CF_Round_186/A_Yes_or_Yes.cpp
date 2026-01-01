#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    string s;
    cin >> s;
    deque<char> dq;
    for (auto ch : s)
    {
        dq.push_back(ch);
    }

    while (dq.size() > 1)
    {
        char ch1 = dq.front();
        dq.pop_front();
        char ch2 = dq.front();
        dq.pop_front();
        if (ch1 == 'N' && ch2 == 'N')
        {
            dq.push_front('N');
        }
        else if (ch1 == 'N' && ch2 == 'Y' || ch1 == 'Y' && ch2 == 'N')
        {
            dq.push_front('Y');
        }
        else
        {
            break;
        }
    }

        if (dq.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
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