#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str, result = "";
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    result = str[0];
    for (int i = 1; i < n; i++)
    {
        if (result.back() != str[i])
        {
            result += str[i];
        }
    }
    if (result == "meow")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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