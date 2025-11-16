#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    for (int i = 1; i < str.size(); i += 2)
    {
        swap(str[i - 1], str[i]);
    }
    cout << str << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}