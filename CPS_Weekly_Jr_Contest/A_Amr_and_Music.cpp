#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), indx;
    for (auto &x : v)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        int mn = *min_element(v.begin(), v.end());
        if (mn <= k)
        {
            k -= mn;
            int idx = find(v.begin(), v.end(), mn) - v.begin();
            v[idx] = INT_MAX;
            indx.push_back(idx);
        }
        else
            break;
    }
    cout << indx.size() << endl;
    for (auto val : indx)
    {
        cout << val + 1 << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}