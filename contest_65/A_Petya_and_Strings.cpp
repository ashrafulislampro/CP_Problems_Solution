#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 == s2)
    {
        cout << 0 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}