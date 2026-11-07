#include <bits/stdc++.h>
#define cint const int
#define uint unsigned int
#define cuint const unsigned int
#define ll long long
#define cll const long long
#define ull unsigned long long
#define cull const unsigned long long
using namespace std;
namespace FastIO
{
    const int BUF_SIZE = 1 << 20;
    char in_buf[BUF_SIZE], out_buf[BUF_SIZE];
    char *in_ptr = in_buf + BUF_SIZE;
    char *out_ptr = out_buf;
    char get_char()
    {
        if (in_ptr == in_buf + BUF_SIZE)
        {
            in_ptr = in_buf;
            fread(in_buf, 1, BUF_SIZE, stdin);
        }
        return *in_ptr++;
    }
    void put_char(char c)
    {
        if (out_ptr == out_buf + BUF_SIZE)
        {
            fwrite(out_buf, 1, BUF_SIZE, stdout);
            out_ptr = out_buf;
        }
        *out_ptr++ = c;
    }
    struct Flusher
    {
        ~Flusher()
        {
            if (out_ptr != out_buf)
            {
                fwrite(out_buf, 1, out_ptr - out_buf, stdout);
            }
        }
    } flusher;
}
#define getchar FastIO::get_char
#define putchar FastIO::put_char
inline int read()
{
    int x = 0;
    bool zf = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
        {
            zf = 0;
        }
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return zf ? x : -x;
}

void print(cint x)
{
    if (x == 0)
    {
        putchar('0');
        return;
    }
    char buf[12];
    int len = 0, y = x;
    if (y < 0)
    {
        putchar('-');
        y = -y;
    }
    while (y)
    {
        buf[len++] = (y % 10) + '0';
        y /= 10;
    }
    while (len--)
    {
        putchar(buf[len]);
    }
}
inline void princh(cint x, const char ch)
{
    print(x);
    putchar(ch);
}
cint mod = 998244353;
int n, m, r, c;
int qpow(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y & 1)
            res = 1ll * res * x % mod;
        x = 1ll * x * x % mod;
        y >>= 1;
    }
    return res;
}
void solve()
{
    n = read();
    m = read();
    r = read();
    c = read();
    princh(qpow(2, (1ll * n * (c - 1) + 1ll * m * (r - 1) - 1ll * (c - 1) * (r - 1)) % (mod - 1)), '\n');
}
int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T = read();
    while (T--)
        solve();
    return 0;
}
