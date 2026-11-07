#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b, p, f, h, c;
    cin >> b >> p >> f;
    cin >> h >> c;

    int total = 0, total1 = 0, total2 = 0;
    if (c > h)
    {

        int i = 1;
        while (b > 1 && i <= f)
        {
            total1 = (c * i);
            b -= 2;
            i++;
        }
        i = 1;
        while (b > 1 && i <= p)
        {
            total2 = (h * i);
            b -= 2;
            i++;
        }
        total = total1 + total2;
    }
    else
    {
        int i = 1;
        while (b > 1 && i <= p)
        {
            total1 = (h * i);
            b -= 2;
            i++;
        }
        i = 1;
        while (b > 1 && i <= f)
        {
            total2 = (c * i);
            b -= 2;
            i++;
        }
        total = total1 + total2;
    }
    cout << total << endl;
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