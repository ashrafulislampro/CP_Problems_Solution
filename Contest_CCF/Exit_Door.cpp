#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for(int t = 0; t < T; t++) {
        int N;
        string S;
        cin >> N >> S;
        int cnt00 = 0, cnt11 = 0;
        for(int i = 0; i < N - 1; i++) {
            if(S[i] == '0' && S[i + 1] == '0') cnt00++;
            if(S[i] == '1' && S[i + 1] == '1') cnt11++;
        }
        if(cnt11 >= cnt00) {
            cout << 0 << '\n';
        } else {
            int diff = cnt00 - cnt11;
            cout << (diff + 1) / 2 << '\n';
        }
    }
    return 0;
}