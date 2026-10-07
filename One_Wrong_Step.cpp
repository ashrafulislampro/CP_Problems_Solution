#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define ASHRAFUL                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve() {
    int n;
    string s;

    cin >> n >> s;

    int U = 0, D = 0, L = 0, R = 0;

    for (char c : s) {
        if (c == 'U') ++U;
        else if (c == 'D') ++D;
        else if (c == 'L') ++L;
        else if (c == 'R') ++R;
    }

    if (abs(U - D) + abs(L - R) == 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ASHRAFUL

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}