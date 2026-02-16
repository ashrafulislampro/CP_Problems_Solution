#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> X(3001), Y(3001);
vector<vector<int>> point(2001, vector<int>(2001, 0));
void solve()
{
    int T = 1;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X[i] >> Y[i];
        X[i] += 1000;
        Y[i] += 1000;
        point[X[i]][Y[i]] = 1;
    }

    int ans = 0;
    for (int i = 0; i < T - 1; i++)
    {
        for (int j = i + 1; j < T; j++)
        {
            if ((X[i] + X[j]) % 2 == 0 and (Y[i] + Y[j]) % 2 == 0)
                ans += point[(X[i] + X[j]) / 2][(Y[i] + Y[j]) / 2];
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}