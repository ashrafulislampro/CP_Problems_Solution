#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(m);

        for (auto &x : arr)
            cin >> x;

        bool flg = false;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] == 1)
            {
                flg = true;
                break;
            }
        }

        if (flg)
        {
            cout << 1 << "\n";
            continue;
        }
        cout << n - arr[m - 1] + 1 << "\n";
    };

    return 0;
}