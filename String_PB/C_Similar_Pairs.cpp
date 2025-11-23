#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;
    for (int &x : v)
    {
        cin >> x;
        if (x % 2 == 0)
            a++;
        else
            b++;
    }

    if (a % 2 != b % 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (a % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1)
                    {

                        cout << "YES" << endl;
                        return;
                    }
                }
            }
            cout << "NO" << endl;
        }
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