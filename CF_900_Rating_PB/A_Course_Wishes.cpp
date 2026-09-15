#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;
#define ll long long
#define rep(i, x, y) for (int i = x; i <= y; ++i)
#define per(i, x, y) for (int i = x; i >= y; --i)
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}
const int N = 55, M = 25, K = 1010;
int n, k, a[M], b[N], c[N];
int p[M][N], q[M][N], lenp[M], lenq[M];
int cnt, x[K], y[K];
inline void mian()
{
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(lenp, 0, sizeof(lenp));
    n = read();
    k = read();
    rep(i, 1, k) a[i] = read();
    rep(i, 1, n) b[i] = read(), p[b[i]][++lenp[b[i]]] = i;
    cnt = 0;
    per(i, k, 1)
    {
        int len = lenp[i];
        rep(j, 1, len)
        {
            rep(l, i, k)
            {
                x[++cnt] = p[i][j];
            }
        }
    }
    printf("%d\n", cnt);
    rep(i, 1, cnt) printf("%d ", x[i]);
    puts("");
    return;
}
int main()
{
    int qwq = read();
    while (qwq--)
        mian();
    return 0;
}