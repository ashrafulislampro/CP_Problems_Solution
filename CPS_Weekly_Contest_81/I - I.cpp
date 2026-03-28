#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<ll> arr;
void solve()
{
    ll x;
    cin >> x;
    bool flg = true;
    for (int i = 1; i <= 10000; i++)
    {
        arr.push_back((ll)i * i * i);
    }
    // for (int i = 0; i < 10000; i++)
    // {
    //     cout << i + 1 << " " << arr[i] << endl;
    // }
    for (int l = 0, r = 0; r < 10000;)
    {
        ll value = arr[l] + arr[r];
        if (value == x)
        {
            cout << "YES" << endl;
            return;
        }

        while (arr[r] > x and l <= r)
        {
            l++;
            
            ll value = arr[l] + arr[r];
            if (value == x)
            {
                cout << "YES" << endl;
                return;
            }else{

            }
        }
        r++;
    }

    
    cout << "NO" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cerr<<(510657175657+193000344139)<<endl;
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37