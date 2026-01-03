#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
vector<int> preCal(100, -1);
void printFibo()
{
    for (int i = 1; i <= 7; i++)
    {
        cout << preCal[i] << " \n"[i == 7];
    }
    // cout << endl;
}
void solve()
{
    // Target Fibo(7)
    preCal[1] = 0;
    printFibo();
    preCal[2] = 1;
    printFibo();
    preCal[3] = preCal[3 - 1] + preCal[3 - 2];
    printFibo();
    preCal[4] = preCal[4 - 1] + preCal[4 - 2];
    printFibo();
    preCal[5] = preCal[5 - 1] + preCal[5 - 2];
    printFibo();
    preCal[6] = preCal[6 - 1] + preCal[6 - 2];
    printFibo();
    preCal[7] = preCal[7 - 1] + preCal[7 - 2];
    printFibo();
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}