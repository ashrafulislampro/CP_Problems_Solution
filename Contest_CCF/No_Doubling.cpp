#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(long long &x : A) cin >> x;

        
        sort(A.begin(), A.end(), greater<long long>());

        for(long long x : A) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
