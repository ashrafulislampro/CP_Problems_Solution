#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    if (str[0] != '<' || str[n - 1] != '>')
    {
        cout << "No" << endl;
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (str[i] != '=')
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}