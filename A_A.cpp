#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    int messi = A * 2 + B;
    int ronaldo = X * 2 + Y;
    if (messi > ronaldo)
    {
        cout << "Messi" << endl;
    }
    else if (messi < ronaldo)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}