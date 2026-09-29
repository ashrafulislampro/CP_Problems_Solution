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
    int k, alice_src = 0, alice_win = 0, bob_src = 0, bob_win = 0, a1, b1, a2, b2;
    cin >> k;
    cin >> a1 >> b1;
    cin >> a2 >> b2;

    alice_src = a1 + a2;
    bob_src = b1 + b2;
    if (a1 > b1)
        alice_win++;
    else
        bob_win++;

    if (a2 > b2)
        alice_win++;
    else
        bob_win++;

    if(alice_src == bob_src+k){
        if(alice_win > bob_win){
            cout<<"NO\n";
        }else cout<<"YES\n";
    }else if(alice_src > bob_src+k)
        cout<<"NO\n";
    else cout<<"YES\n";
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