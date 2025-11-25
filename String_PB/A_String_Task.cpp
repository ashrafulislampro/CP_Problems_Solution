#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, s1 = "";
    cin >> s;
    vector<char> v = {'a', 'e', 'i', 'o', 'u', 'y'};

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (find(v.begin(), v.end(), s[i]) != v.end())
        {
            continue;
        };
        s1 += '.';
        s1 += s[i];
    }
    cout << s1 << endl;
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