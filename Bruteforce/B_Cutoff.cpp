#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> v[i];
    v.push_back(-1);

    for (int last = 0; last <= 100; last++)
    {
        vector<int> b = v;
        b[n - 1] = last;
        sort(b.begin(), b.end());

        int sum = 0;
        for (int i = 1; i < n - 1; i++)
        {
            sum += b[i];
        }

        if (sum >= x)
        {
            cout << last << endl;
            return;
        }
    }
    cout << -1 << endl;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}