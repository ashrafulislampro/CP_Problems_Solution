#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int ass_v = str[i];
        if (ass_v <= 90)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}