#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int sz = str.size();
    for (int i = 0; i < sz; i++)
    {
        char ch = str[i] - 32;
        cout << ch;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}