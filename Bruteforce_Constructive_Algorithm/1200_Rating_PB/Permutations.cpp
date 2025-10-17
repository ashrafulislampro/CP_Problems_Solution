#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 1)
            {
                cout << i << " ";
            }
        }
        for (int i = n; i >= 2; i--)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}