#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int sz = str.size();

    for (int i = 0; i < sz; i++)
    {
        int ass_v = str[i];
        if ((i + 1) % 2 == 1 && ass_v <= 90)
        {
            cout << "No" << endl;
            return;
        }
        if ((i + 1) % 2 == 0 && (ass_v >= 97))
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