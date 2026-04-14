#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int msb(int n)
{
    return log2(n);
}
void solve()
{
    int a, b;
    cin >> a >> b;

    if (msb(b) > msb(a))
        cout << -1 << endl;
    else if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        vector<int> arr;
        for (int i = 0; i < 31; i++)
        {
            int x = (1 << i);

            if (x <= a and (a & x) == 0)
            {
                a = a | x;
                arr.push_back(x);
            }
        }
        for (int i = 0; i < 31; i++)
        {
            int x = (1 << i);
            if (x <= a and (b & x) == 0)
            {
                arr.push_back(x);
            }
        }

        cout << arr.size() << endl;
        for (auto x : arr)
            cout << x << " ";
        cout << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37