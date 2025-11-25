#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, s2 = "";
    cin >> s;
    char ch = *min_element(s.begin(), s.end());
    
    for (int i = n - 1; i >= 1; i--)
    {
        if (s[i] <= ch)
        {
            s2 += s[i];
            s.erase(i, 1);
            break;
        }
    }
    cout << s2+ s << endl;
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