#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<ll> A(N);

        for (auto &x : A)
            cin >> x;

        ll prefix = 0;
        ll ans = 0;

        for (int i = 0; i < N; i++) {
            ll current = prefix + 2 * A[i];
            ans = max(ans, current);
            prefix += A[i];
        }

        cout << ans << '\n';
    }

    return 0;
}