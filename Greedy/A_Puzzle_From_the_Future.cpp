#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string b = "", a = "1";
    cin >> b;

    for (int i = 1; i < n; i++)
    {
        a.push_back('1');
        if (a[i - 1] + b[i - 1] == a[i] + b[i])
        {
            a.pop_back();
            a.push_back('0');
        }
    }

    cout << a << endl;
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