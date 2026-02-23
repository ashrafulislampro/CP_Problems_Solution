#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m;
    cin >> n;
    string s;
    cin >> s;
    vector<int> pos0, pos1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            pos0.push_back(i + 1);
        else
            pos1.push_back(i + 1);
    }

    int c0 = pos0.size();
    int c1 = pos1.size();

    if (c1 % 2 == 0)
    {
        cout << c1 << endl;
        for (int i = 0; i < c1; i++)
            cout << pos1[i] << " \n"[i + 1 == c1];
    }
    else if (c0 % 2 == 1)
    {
        cout << c0 << endl;
        for (int i = 0; i < c0; i++)
            cout << pos0[i] << " \n"[i + 1 == c0];
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    ASHRAFUL
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37