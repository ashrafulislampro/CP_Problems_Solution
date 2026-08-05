#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<ll> zz(n, 0), zo(n, 0), oo(n, 0), oz(n, 0);
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            if (b[i] == '0')
                zz[i]++;
            else
                zo[i]++;
        } else {
            if (b[i] == '0')
                oz[i]++;
            else
                oo[i]++;
        }
        if (i)
            zz[i] += zz[i - 1], zo[i] += zo[i - 1], oo[i] += oo[i - 1], oz[i] += oz[i - 1];
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        ll ooC = oo[r] - (l ? oo[l - 1] : 0);
        ll ozC = oz[r] - (l ? oz[l - 1] : 0);
        ll zzC = zz[r] - (l ? zz[l - 1] : 0);
        ll zoC = zo[r] - (l ? zo[l - 1] : 0);
        ll mnOZZO = min(ozC, zoC);
        ozC -= mnOZZO, zoC -= mnOZZO;
        if (zoC + ozC <= ooC + zzC)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)