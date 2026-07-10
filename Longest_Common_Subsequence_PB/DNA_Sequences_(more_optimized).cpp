#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;

    while (cin >> k && k)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.size();
        int m = s2.size();

        // lcs[i][j]
        vector<vector<int>> lcs(n + 1, vector<int>(m + 1, 0));

        // Rolling arrays
        vector<int> prevRun(m + 1, 0), curRun(m + 1, 0);
        vector<int> prevBest(m + 1, 0), curBest(m + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            fill(curRun.begin(), curRun.end(), 0);
            fill(curBest.begin(), curBest.end(), 0);

            for (int j = 1; j <= m; j++)
            {
                // সাধারণ LCS transition
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);

                if (s1[i - 1] == s2[j - 1])
                {
                    curRun[j] = prevRun[j - 1] + 1;

                    if (curRun[j] >= k)
                    {
                        int candidate = lcs[i - k][j - k] + k;

                        if (prevRun[j - 1] >= k)
                            curBest[j] = max(candidate, prevBest[j - 1] + 1);
                        else
                            curBest[j] = candidate;

                        lcs[i][j] = max(lcs[i][j], curBest[j]);
                    }
                }
            }

            swap(prevRun, curRun);
            swap(prevBest, curBest);
        }

        cout << lcs[n][m] << '\n';
    }

    return 0;
}


/*
Sample Input:
3
lovxxelyxxxxx
xxxxxxxlovely
1
lovxxelyxxxxx
xxxxxxxlovely
3
lovxxxelxyxxxx
xxxlovelyxxxxxxx
4
lovxxxelyxxx
xxxxxxlovely
0

Sample Output:
6
7
10
0

https://www.spoj.com/problems/SAMER08D/en/
*/