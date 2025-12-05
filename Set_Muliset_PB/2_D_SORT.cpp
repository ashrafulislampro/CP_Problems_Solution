#include <bits/stdc++.h>
using namespace std;
struct cmp
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};
void solve()
{
    int n;
    scanf("%d", &n);
    multiset<pair<int, int>, cmp> mst;
    while (n--)
    {
        int x, y;
        scanf("%d%d", &x,&y);
        mst.insert({x, y});
    }

    for (auto [first, second] : mst)
    {
        printf("%d %d\n", first, second);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    scanf("%d", &T);
    while (T--)
        solve();
    return 0;
}