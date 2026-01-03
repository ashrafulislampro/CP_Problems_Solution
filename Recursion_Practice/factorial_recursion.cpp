#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
vector<ll> f(10, -1);
// Memorization Technique
int fact(int n)
{
    if (n <= 1)
        return 1; // Base case(independant)
    else if(f[n] != -1)
        return f[n];
    return f[n] = n * fact(n - 1);
}

int fact2(int n) // loop factorial
{
    ll ans = 1; // Base case(independant)
    for(int i = 1; i <= n; i++)
        ans *= i;
    return ans;
}
void solve()
{
    cout << fact(0) << endl;
    cout << fact(1) << endl;
    cout << fact(2) << endl;
    cout << fact(3) << endl;
    cout << fact(4) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}