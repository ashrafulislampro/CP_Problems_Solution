#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    vector<int> v(3);
    for(auto &x: v)cin>>x;
    sort(v.begin(), v.end());
    a = v[0], b = v[1],c = v[2];

    
    if (a == b && b == c)
    {
        cout << "YES" << endl;
    }
    else if ((b % a == 0 && c % a == 0) && ((b / a) - 1 + (c / a) - 1) <= 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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