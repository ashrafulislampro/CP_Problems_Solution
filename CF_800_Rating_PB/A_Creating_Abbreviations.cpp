#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        vector<string> abbr(m);

        // available[c] = can we currently use a word
        // whose first character is c?
        bool available[26] = {};

        for (int i = 0; i < n; i++) {
            cin >> words[i];

            // Ordinary word becomes available from the beginning.
            available[words[i][0] - 'a'] = true;
        }

        for (int i = 0; i < m; i++) {
            cin >> abbr[i];

            // Convert abbreviation characters to lowercase
            // so that they can be checked against available[].
            for (char &c : abbr[i]) {
                c = c - 'A' + 'a';
            }
        }

        vector<bool> done(m, false);

        int created = 0;

        while (true) {
            bool changed = false;

            for (int i = 0; i < m; i++) {
                if (done[i])
                    continue;

                bool canCreate = true;

                // Every character of this abbreviation
                // must be currently available.
                for (char c : abbr[i]) {
                    if (!available[c - 'a']) {
                        canCreate = false;
                        break;
                    }
                }

                if (canCreate) {
                    done[i] = true;
                    created++;

                    // This newly created abbreviation can
                    // be used as a word later.
                    available[abbr[i][0] - 'a'] = true;

                    changed = true;
                }
            }

            // No more abbreviation can be created.
            if (!changed)
                break;
        }

        cout << (created == m ? "YES\n" : "NO\n");
    }

    return 0;
}