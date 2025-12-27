#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << "BRONZE" << endl;
    }
    else if (n > 3 && n <= 6)
    {
        cout << "SILVER" << endl;
    }
    else
    {
        cout << "GOLD" << endl;
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