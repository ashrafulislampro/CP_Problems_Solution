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
    ll n, k;
    cin >> n >> k;

    vll A(n), B(n);
    for (auto &it : A)
        cin >> it;
    for (auto &it : B)
        cin >> it;

    ll m_one = 0, id;

    for (int i = 0; i < n; i++)
    {
        if (B[i] == -1)
            m_one++;
        if (B[i] != -1)
        {
            id = i;
            break;
        }
    }

    if (m_one == n)
    {
        ll mn_ele = *min_element(A.begin(), A.end());
        ll mx_ele = *max_element(A.begin(), A.end());

        ll value = mn_ele + k;
        ll value2 = value - mx_ele;

        cout << value2 + 1 << "\n";
    }
    else
    {
        ll val = B[id] + A[id];
        bool flg = false;

        for (int i = 0; i < n; i++)
        {

            if (B[i] == -1)
            {
                ll val2 = val - A[i];
                if (val2 > k || val2 < 0)
                {
                    flg = true;
                    break;
                }
            }
            else
            {
                if (B[i] + A[i] != val)
                {
                    flg = true;
                    break;
                }
            }
        }

        if (!flg)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
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