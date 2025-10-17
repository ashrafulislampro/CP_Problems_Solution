#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, N = 0, tmp;
        cin >> n;
        N = n;
        tmp = n;
        bool flg = true;
        for (int i = 1; i < n; i++)
        {
            if (flg)
            {
                N -= (tmp - i);
                flg = false;
                continue;
            }
            if (!flg)
            {
                N += (tmp - i);
                flg = true;
                continue;
            }
        }
        cout << N << endl;
    }
    return 0;
}
