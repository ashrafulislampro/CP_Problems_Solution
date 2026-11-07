#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll cycle[] = {4, 16, 37, 58, 89, 145, 42, 20};

int getSignature(ll x)
{
    int steps = 0;

    while (true)
    {
        if (x == 1)
            return 8;

        for (int i = 0; i < 8; ++i)
        {
            if (x == cycle[i])
            {
                return (i - steps + 8) % 8;
            }
        }

        ll sum = 0;

        while (x > 0)
        {
            ll digit = x % 10;
            sum += digit * digit;
            x /= 10;
        }

        x = sum;
        ++steps;
    }
}

void solve()
{
    int n;
    cin >> n;

    ll count[9] = {};

    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        ++count[getSignature(x)];
    }

    ll answer = 0;

    for (int i = 0; i < 9; ++i)
    {
        answer += count[i] * (count[i] - 1) / 2;
    }

    cout << answer << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}