#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '5' && str[i] <= '9')
        {
            if (i == 0 && str[i] == '9')
                continue;
            int digit = str[i] - '0';
            str[i] = '0' + (9 - digit);
        }
    }
    cout << str << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}