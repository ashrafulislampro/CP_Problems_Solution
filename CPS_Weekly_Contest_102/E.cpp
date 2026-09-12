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

int n = 8;
bool grid[8][8];

bool isOk(int i, int j)
{
    for (int k = 0; k < n; k++)
    {
        if (grid[i][k])
        {
            return false;
        }
    }
    for (int l = 0; l < n; l++)
    {
        if (grid[l][j])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    char ch;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> ch;
            grid[i][j] = ch == '#';
        }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isOk(i, j))
                cnt++;
        }
    }

    cout << cnt << "\n";
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37