#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_palindrome(ll n)
{
    string str = to_string(n);
    int len = str.size();
    if (n % 2 == 0)
    {
        for (int i = 0, j = len - 1; i < j; i++, j--)
        {
            if (str[i] != str[j])
            {
                return false;
            }
        }
    }
    else
    {
        for (int i = 0, j = len - 1; i <= j; i++, j--)
        {
            if (str[i] != str[j])
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> v;
    for (ll i = 1; i <= 1000000; i++)
    {
        ll cube = (i * i * i);

        if (cube <= n)
        {
            v.push_back(cube);
        }
    }
    sort(v.begin(), v.end(), greater<>());
    for (auto val : v)
    {

        if (is_palindrome(val))
        {
            cout << val << endl;
            return;
        }
    };
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}