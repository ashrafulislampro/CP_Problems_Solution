#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, str = "!@#$%^&*()-+";
    cin >> s;
    int u_c = 0, l_c = 0, s_c = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            u_c++;
        else if (islower(s[i]))
            l_c++;
        else if (isdigit(s[i]))
            d++;
        else if (str.find(s[i]) != string::npos)
            s_c++;
    }

    int ans = 0;
    if (u_c == 0)
        ans++;
    if (l_c == 0)
        ans++;
    if (s_c == 0)
        ans++;
    if (d == 0)
        ans++;
    cout << max(ans, 6 - n) << endl;
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