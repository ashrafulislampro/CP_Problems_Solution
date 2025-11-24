#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<char> v(26), vec;

    for (int i = 0; i <= 25; i++)
    {
        char ch = 'a' + i;
        v[i] = ch;
    }

    bool ok = true;

    for (int i = 0; i <= 25 && ok; i++)
    {
        for (int j = 0; j <= 25 && ok; j++)
        {
            for (int k = 0; k <= 25 && ok; k++)
            {
                if (i + j + k + 3 == n)
                {
                    vec.push_back(v[i]);
                    vec.push_back(v[j]);
                    vec.push_back(v[k]);
                    ok = false;
                }
            }
        }
    }
    for (auto val : vec)
        cout << val;
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