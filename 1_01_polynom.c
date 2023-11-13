# include <stdio.h>
# include <math.h>
int main (int argc , char ** argv )
{
    long long n, x, xn;
    long long ans = 0, ans2 = 0;
    scanf("%lld", &n);
    scanf("%lld", &x);
    if (n > 0) {
        scanf("%lld", &xn);
        ans = xn;
        if (n == 0)
        {
            ans2 = 1;
        }
        else
        {
            ans2 = xn * n;
        }
        // printf("ans - %lld ans2 - %lld\n", ans, ans2);
        for (long long i = 0; i < n; i++) {
            scanf("%lld", &xn);
            ans = (ans * x) + xn;
            if (i < n - 1)
            {
                ans2 = (ans2 * x) + (n - i - 1) * xn;
            }
            // printf("ans - %d ans2 - %d\n", ans, ans2);
        }
        printf("%lld %lld\n", ans, ans2);
    } 
    else {
        scanf("%lld", &xn);
        printf("%lld 1", xn);
    }
    return 0;
}
