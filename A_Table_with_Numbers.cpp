#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        int R = 0, C = 0, S = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x <= h) ++R;
            if (x <= l) ++C;
            if (x <= min(h, l)) ++S;
        }
        int ans = min({R, C, (R + C - S) / 2});
        cout << ans << '\n';
    }
    return 0;
}