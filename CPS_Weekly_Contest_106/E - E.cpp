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
    int mn_cnt = 0, mx_cnt = 0;
    string ss;
    cin >> ss;

    int n = ss.sz();
    if (n % 2 != 0)
    {
        cout << "No";
    }
    else
    {
        map<char, int> frq;

        for (int i = 0; i < n; i++)
        {
            frq[ss[i]]++;
        }
        for (auto [key, val] : frq)
        {
            if (val < 2 || val > 2)
            {
                cout << "No";
                return;
            }
        }

        for (int i = 1; i <= n / 2; i++)
        {
            int id = 2 * i - 1;
            int id2 = (2 * i) - 2;
            if (ss[id] != ss[id2])
            {

                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37