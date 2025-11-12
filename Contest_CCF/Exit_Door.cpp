#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
void solve()
{
    int n, x, dis_t = 0;
    cin >> n;
    vector<pair<int, int>> pt;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    while (!v.empty())
    {
        int max_ele = *max_element(v.begin(), v.end());
        int l = 0, r = 0;
        bool flg = false;
        auto it_max = v.begin();
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (*it == max_ele)
            {
                flg = true;
                it_max = it;
                continue;
            }
            if (!flg)
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        v.erase(it_max);
        dis_t += min(l, r);
    }

    cout << dis_t << endl;
    
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