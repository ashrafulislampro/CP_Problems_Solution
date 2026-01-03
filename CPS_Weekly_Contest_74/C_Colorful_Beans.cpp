#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int a, c;
        cin >> a >> c;

        if (mp.count(c))
        {

            mp[c] = min(mp[c], a);
        }
        else
        {

            mp[c] = a;
        }
    }

    int ans = -1;

    for (auto [c, val] : mp)
    {
        ans = max(ans, val);
    }

    cout << ans << endl;
}
