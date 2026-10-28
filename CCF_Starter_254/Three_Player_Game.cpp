#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        if (N % 3 == 0)
            cout << N + 1 << '\n';
        else if (N % 3 == 1)
            cout << N << '\n';
        else
            cout << N + 2 << '\n';
    }

    return 0;
}