#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "For")
            c1++;
        else
            c2++;
    }
    if (c1 > c2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}