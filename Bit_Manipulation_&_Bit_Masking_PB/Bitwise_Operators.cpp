#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{

    int and_mx = 0, or_mx = 0, xor_mx = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int val = i & j;
            if ((val > and_mx) && (val < k))
                and_mx = val;
            val = i | j;
            if ((val > or_mx) && (val < k))
                or_mx = val;
            val = i ^ j;
            if ((val > xor_mx) && (val < k))
                xor_mx = val;
        }
    }
    printf("%d\n%d\n%d", and_mx, or_mx, xor_mx);
}
int main()
{

    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37