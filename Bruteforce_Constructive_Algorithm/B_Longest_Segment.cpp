#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x[101], y[101];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int max_sqr_dist = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int curr_sqr_dist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            max_sqr_dist = max(max_sqr_dist, curr_sqr_dist);
        }
    }
    cout << fixed << setprecision(10) << sqrt(max_sqr_dist) << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}