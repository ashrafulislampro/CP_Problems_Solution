#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<string> v;

    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (--k >= 0)
            v.push_back(str);
    }

    sort(v.begin(), v.end());
    for (auto val : v)
        cout << val << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}