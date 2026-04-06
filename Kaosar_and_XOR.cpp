#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pan      \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
#define values .
#define MOD 1000000007
#define PI 3.1415926535897932384626 / Bit - Stuff /
#define get_set_bits(a) (__builtin_popcount(a))                                                // Counts the number of set bits (1s) in the binary representation of an integer.
#define get_set_bitsll(a) (__builtin_popcountll(a))                                            // Counts the number of set bits (1s) in a long long integer.
#define get_trail_zero(a) (__builtin_ctz(a))                                                   // Counts the number of trailing zeros (zeros at the end) in the binary representation.
#define get_lead_zero(a) (__builtin_clzll(a))                                                  // Counts the number of leading zeros (zeros at the beginning) in the binary representation.
#define get_parity(a) (__builtin_parity(a))                                                    // Checks the parity of a number.// Returns 1 if the number of set bits is odd, and 0 if it is even./ Abbrevations */
#define ff first #define ss second #define mp make_pair #define pb push_back #define Endl "\n" // loops
#define forin(arr, n)          \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i]; // sort
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V), greater<ll>())

/* PBDS */
#include <ext/pb_ds/assoc_container.hpp>#include <ext/pb_ds/tree_policy.hpp>using namespace __gnu_pbds;typedef tree<int,null_type, less<int>,rb_tree_tag, tree_order_statistics_node_update> oset; // less -> ascending sorted and unique// less_equal -> ascending sorted and duplicate// greater as same as less// find_by_order (x) -> x index element// order_of_key (x) -> number of element strictly smaller than (x)

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    ll n;
    cin >> n;

    if (n <= 2)
    {
        if (n == 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }
    ll cnt = 64 - __builtin_clzll(n);

    if (!(n & (n - 1)))
    { // power of 2
        cout << (((1LL << cnt) % MOD) - 2) % MOD << endl;
    }
    else
        cout << (((1LL << cnt) % MOD) - 1) % MOD << endl;
}

int32_t main()
{
    fastio;

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}