#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    if (str == "ACE" || str == "BDF" || str == "CEG" || str == "DFA" || str == "EGB" || str == "FAC" || str == "GBD")
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