#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    cout << 'K' << str[1] << str[0] << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}