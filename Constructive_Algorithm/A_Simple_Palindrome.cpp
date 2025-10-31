#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n;
    x = n / 5, y = n % 5;
    for (int i = 0; i < x; i++)
    {
        cout << 'a';
    }
    if (y)
    {
        cout << 'a';
        y--;
    }
    for (int i = 0; i < x; i++)
    {
        cout << 'e';
    }
    if (y)
    {
        cout << 'e';
        y--;
    }
    for (int i = 0; i < x; i++)
    {
        cout << 'i';
    }
    if (y)
    {
        cout << 'i';
        y--;
    }
    for (int i = 0; i < x; i++)
    {
        cout << 'o';
    }
    if (y)
    {
        cout << 'o';
        y--;
    }
    for (int i = 0; i < x; i++)
    {
        cout << 'u';
    }
    if (y)
    {
        cout << 'u';
        y--;
    }

    cout << endl;
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