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
char flip(char ch){
    return ch == '1' ? '0' : '1';
}
void solve()
{
    int n;
    cin >> n;
    string ss;
    cin >> ss;

    for (int i = 0; i < n; i += 2)
    {
        if (ss[i] == '?')
            continue;

        for (int j = i - 2; j >= 0; j -= 2)
        {
            if (ss[j] == '?')
                ss[j] = flip(ss[j + 2]); // flipping
            else if (ss[j] == ss[j + 2])
            {
                cout << 0 << "\n";
                return;
            }
        }
        for (int j = i + 2; j < n; j += 2)
        {
            if (ss[j] == '?')
                ss[j] = flip(ss[j - 2]);
            else if (ss[j] == ss[j - 2])
            {
                cout << 0 << "\n";
                return;
            }
        }
        break;
    }

    for (int i = 1; i < n; i += 2)
    {
        if (ss[i] == '?')
            continue;

        for (int j = i - 2; j >= 0; j -= 2)
        {
            if (ss[j] == '?')
                ss[j] = flip(ss[j + 2]); // flipping
            else if (ss[j] == ss[j + 2])
            {
                cout << 0 << "\n";
                return;
            }
        }
        
        for (int j = i + 2; j < n; j += 2)
        {
            if (ss[j] == '?')
                ss[j] = flip(ss[j - 2]);
            else if (ss[j] == ss[j - 2])
            {
                cout << 0 << "\n";
                return;
            }
        }
        break;
    }

    int ans = (n > 0 and ss[0] == '?' ? 2 : 1) * (n > 1 and ss[1] == '?' ? 2 : 1);
    cout << ans << "\n";
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