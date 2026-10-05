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
    int n, x;
    cin >> n;

    deque<int> A, B;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.pb(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        B.pb(x);
    }

    while (A.sz() >= 2 and B.sz() >= 2)
    {

        int a_lt = A.back();
        int b_ft = B.front();
       
        if (a_lt == b_ft)
        {

            A.pop_back();
            B.pop_front();
        }
        else
        {
            A.pop_back();
            B.pop_back();
        }
    }
    
    if (A.front() == B.front())
        cout << "Bob\n";
    else
        cout << "Alice\n";
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