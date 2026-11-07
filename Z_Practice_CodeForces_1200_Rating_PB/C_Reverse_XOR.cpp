#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N)
            N >>= __builtin_ctz(N);
        int o = 0, cnt = 0;
        for (int v = N; v; v >>= 1)
            o = (o << 1) + (v & 1), cnt++;
        cout << (o == N && !((cnt & 1) && ((N >> (cnt >> 1)) & 1)) ? "YES" : "NO") << '\n';
    }
}