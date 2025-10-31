#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int min_val = *min_element(v.begin(), v.end());
    int max_val = *max_element(v.begin(), v.end());

    if (min_val == max_val)
    {
        cout << 0 << endl;
        return;
    }

    for (auto it = v.begin(); it != v.end();)
    {

        if ((*it + min_val) / 2 < *it)
        {
            it = v.erase(it);
        }
        else
        {
            ++it;
        }
    }
    cout << n - v.size() << endl;

    
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