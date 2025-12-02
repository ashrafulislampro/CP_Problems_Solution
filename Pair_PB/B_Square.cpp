#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    int total = a1 * b1 + a2 * b2;
    int a = sqrt(total);
    if (a1 < b1)
    {
        a1 = a1 + b1;
        b1 = a1 - b1;
        a1 = a1 - b1;
    }
    if(a2 < b2){
        a2 = a2 + b2;
        b2 = a2 - b2;
        a2 = a2 - b2;
    }
    if (total == a * a && a1 != b1 && a2 != b2 && a1 == a2)
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

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}