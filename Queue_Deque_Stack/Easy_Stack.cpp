#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    stack<int> st;
    while (n--)
    {
        int tt;
        scanf("%d", &tt);

        if (tt == 1)
        {
            int x;
            scanf("%d", &x);
            st.push(x);
        }
        else if (tt == 2)
        {
            if (!st.empty())
                st.pop();
        }
        else
        {
            if (!st.empty())
            {
                printf("%d\n", st.top());;
            }
            else
            {
                printf("Empty!\n");
            }
        }
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}