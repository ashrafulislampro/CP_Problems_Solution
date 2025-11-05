#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    size_t pos_A = str.find('A');
    size_t pos_B = str.rfind('B');
    if (pos_A == string::npos || pos_B == string::npos)
    {
        cout << 0 << endl;
    }
    else if (pos_A > pos_B)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << pos_B - pos_A << endl;
    }

    // cout << cnt << endl;
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