#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    scanf("%d", &n);
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         {
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first; });

    for (auto val : v)
    {
        printf("%d %d\n", val.first, val.second);
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    scanf("%d", &T);
    while (T--)
        solve();
    return 0;
}