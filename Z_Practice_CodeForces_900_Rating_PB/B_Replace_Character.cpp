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

const ll inf = (ll)1e9;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    string ss;
    cin >> ss;

    map<char, int> freq;
    for (int i = 0; i < n; i++)
        freq[ss[i]]++;

    int low = inf, high = 0;
    char low_ch, high_ch;
    for (auto [key, val] : freq)
    {
        if (val < low)
            low = val, low_ch = key;
        if (val >= high)
            high = val, high_ch = key;
    }
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == low_ch)
        {
            ss[i] = high_ch;
            break;
        }
    }

    cout << ss << "\n";
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