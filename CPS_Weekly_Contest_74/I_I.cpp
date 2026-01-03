#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tcs;
    cin >> tcs;

    while (tcs--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        for (int i = 1; i <= diff; ++i)
        {
            if (diff % i)
                continue;
            if (diff / i + 1 > n)
                continue;
            int k = min((y - 1) / i, n - 1);
            int a0 = y - k * i;
            for (int j = 0; j < n; ++j)
            {
                cout << (a0 + j * i) << ' ';
            }
            cout << endl;
            break;
        }
    }
}