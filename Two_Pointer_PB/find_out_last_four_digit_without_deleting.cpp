#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    int p;
    cin >> p;

    /*******  left shift without deleting any bit ******/

    int ans = n & (1 << p);
    // your code
    cout << "value of your is " << (ans > 0 ? 1 : 0) << endl;
    cin >> p;
    ans = n & (1 << p);
    cout << "value of your is " << (ans > 0 ? 1 : 0) << endl;
    cin >> p;
    ans = n & (1 << p);
    cout << "value of your is " << (ans > 0 ? 1 : 0) << endl;
    cin >> p;
    ans = n & (1 << p);
    cout << "value of your is " << (ans > 0 ? 1 : 0) << endl;

    /***********Find out exact positional bit using right shift **********/
    int ans1 = (n >> p) & 1;
    cout << ans1 << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37