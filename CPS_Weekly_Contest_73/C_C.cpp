#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cntA = 0, cntB = 0, cntAB = 0, cntO = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "A")
            cntA++;
        else if (s == "B")
            cntB++;
        else if (s == "AB")
            cntAB++;
        else
            cntO++;
    }

    cout << cntO + cntAB + max(cntA, cntB) << "\n";
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