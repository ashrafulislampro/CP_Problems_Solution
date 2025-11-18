#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    vector<int> v;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '+')
            continue;
        v.push_back(str[i] - '0');
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << "+" << v[i];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}