#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    queue<int> st;
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
                printf("%d\n", st.front());
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

    solve();
    return 0;
}