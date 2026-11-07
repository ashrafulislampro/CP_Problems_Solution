#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char arr[27];
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        arr[i + 1] = ch;
    }

    // cout << arr[26] << " ";
    for (int i = 1; i < 27; i++)
    {
        for (int j = 1; j < 27; j++)
        {
            for (int k = 1; k < 27; k++)
            {
                if (i + j + k == n)
                {
                    cout << arr[i] << arr[j] << arr[k] << endl;
                    return;
                }
            }
        }
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