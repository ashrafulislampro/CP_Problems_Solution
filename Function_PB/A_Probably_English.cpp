#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ok = 0;
    cin >> n;
    cin.ignore();
    string str;

    vector<string> ss = {"and", "not", "that", "the", "you"};
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        auto it = find(ss.begin(), ss.end(), str);
        if (it != ss.end())
        {
            ok = 1;
        }
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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