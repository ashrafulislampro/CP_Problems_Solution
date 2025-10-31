#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<long long> S(N - 1), T(N - 1);
    for (int i = 0; i < N - 1; i++) cin >> S[i] >> T[i];

    for (int i = 0; i < N - 1; i++) {
        long long times = A[i] / S[i];  
        A[i + 1] += times * T[i];       
    }

    cout << A[N - 1] << endl;
    return 0;
}
