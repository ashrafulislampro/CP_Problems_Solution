#include <bits/stdc++.h>
using namespace std;
int t, n, p[200005], a[200005], loc[200005];
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &p[i]), loc[p[i]] = i;
        bool flag = 1;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (loc[a[i]] < loc[a[i - 1]])
                flag = 0;
        }
        puts(flag ? "YES" : "NO");
    }
}