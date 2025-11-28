#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    string s, ip;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> ip;
        ip += ';';
        mp[ip] = s;
    }
   
    for (int i = 0; i < m; i++)
    {
        cin >> s >> ip;
        cout << s << " " << ip << " #" << mp[ip] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}