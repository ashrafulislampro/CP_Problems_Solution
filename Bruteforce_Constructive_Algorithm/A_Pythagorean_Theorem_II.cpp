#include <bits/stdc++.h>
using namespace std;
bool is_square[100000001];

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        is_square[i * i] = true;
    }

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int c_sqr = a * a + b * b;
            if (c_sqr <= n * n && is_square[c_sqr])
                cnt++;
        }
    }

    cout << cnt << "\n";
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