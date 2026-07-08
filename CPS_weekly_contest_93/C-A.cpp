#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long N, X, Y;
        cin >> N >> X >> Y;

        long long lower = max(0LL, N - Y / 3);
        long long upper = min(N, X - N);

        if (lower <= upper) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}