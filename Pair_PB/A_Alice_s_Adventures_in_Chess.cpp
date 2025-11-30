#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, a, b;
    cin >> n;
    pair<int, int> d, poss = {0, 0};

    cin >> d.first >> d.second;
    string s;
    cin >> s;

    if (poss == d)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < 100; i++)
    {
        for (auto c : s)
        {
            if (c == 'N')
                poss.second++;
            else if (c == 'S')
                poss.second--;
            else if (c == 'E')
                poss.first++;
            else
                poss.first--;
            if (poss == d)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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