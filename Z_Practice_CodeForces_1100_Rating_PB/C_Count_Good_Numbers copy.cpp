
#include <bits/stdc++.h>
using namespace std;

bool good(long long x)
{
    return x % 2 > 0 && x % 3 > 0 &&
           x % 5 > 0 && x % 7 > 0;
}

long long get_naive(long long x)
{
    long long ans = 0;

    for (long long i = 0; i < x; i++)
    {
        if (good(i))
        {
            ans++;
        }
    }

    return ans;
}

long long get(long long r)
{
    return (r / 210) * get_naive(210) + get_naive(r % 210);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        cout << get(r + 1) - get(l) << '\n';
    }

    return 0;
}
// https://codeforces.com/problemset/problem/2125/C