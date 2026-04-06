#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
unsigned int flippingBits(unsigned int n)
{
    return ~n;
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        unsigned int n;
        cin >> n;
        unsigned int res = flippingBits(n);
        cout << res << endl;
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37