#include <bits/stdc++.h>
using namespace std;

int maxSumAfterRemovals(int N, int K, vector<int>& A) {
   
    vector<int> prefix(N+1, 0);
    for (int i = 0; i < N; i++) {
        prefix[i+1] = prefix[i] + A[i];
    }

    int max_sum = 0;
    // Try all splits: i removals from front, K-i from back
    for (int i = 0; i <= K; i++) {
        int j = K - i;
        int remaining_sum = prefix[N-j] - prefix[i];
        max_sum = max(max_sum, remaining_sum);
    }
    return max_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maxSumAfterRemovals(N, K, A) << "\n";
    }
    return 0;
}
