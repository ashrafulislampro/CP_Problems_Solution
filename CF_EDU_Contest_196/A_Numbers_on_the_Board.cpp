#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int l, r, sum = 0;
    cin >> l >> r;

    vll arr, brr;
    for (int i = l; i <= r; i++)
    {
        sum += i;
        arr.pb(i), brr.pb(i);
    }

    if (sum >= l and sum <= r)
    {
        cout << 0 << "\n";
    }
    else
    {
       
        sort(arr.rbegin(), arr.rend());
        int cnt1 = 0, cnt2 = 0;
        int tmp = sum;
        for (int i = arr.sz() - 1; i > 0; i--)
        {
            tmp -= arr[i];
            if (arr[i] != 0)
                cnt1++;
            arr.pop_back();
            // cerr << tmp << " = " << arr[i] << "," << cnt1 << endl;
            if (tmp >= l and tmp <= r)
            {
                auto it = find(arr.begin(), arr.end(), tmp);
                if (it != arr.end())
                    break;
            }
        }
        
         sort(brr.begin(), brr.end());
        for (int i = brr.sz() - 1; i > 0; i--)
        {
            sum -= brr[i];
            if (brr[i] != 0)
                cnt2++;
            brr.pop_back();
            // cerr << sum << " = " << brr[i] << "," << cnt2 << endl;
            if (sum >= l and sum <= r)
            {
                auto it = find(brr.begin(), brr.end(), sum);
                if (it != brr.end())
                    break;
            }
        }
        cout << min(cnt1, cnt2) << "\n";
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37