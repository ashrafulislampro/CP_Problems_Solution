#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        long long K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        long long total = 0;
        int max_cost = 0;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            total += A[i];
            max_cost = max(max_cost, A[i]);

            // Either we can afford directly, or by using coupon on max item
            if (total <= K || total - max_cost <= K) {
                ans = i + 1;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
