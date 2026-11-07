#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    while (n % 2 == 0)
        n /= 2;
    while (n % 3 == 0)
        n /= 3;

    if (n == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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