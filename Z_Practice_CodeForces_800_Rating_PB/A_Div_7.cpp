#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 7 == 0)
    {
        cout << n << endl;
        return;
    }
    else
    {
        int tmp = n, i = 0;

        tmp /= 10;
        tmp = tmp * 10;

        while (i < 9)
        {
            tmp++;
            i++;

            if (tmp % 7 == 0)
                break;
        }

        cout << tmp << endl;
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