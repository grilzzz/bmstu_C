
# include <stdio.h>
# include <math.h>
int main (int argc , char ** argv )
{
    int n, x, xn;
    int ans = 0;
    scanf("%d", &n);
    scanf("%d", &x);
    if (n > 0) {
        scanf("%d", &xn);
        ans = xn;
        for (int i = 0; i < n; i++) {
            scanf("%d", &xn);
            ans = (ans * x) + xn;
        }
        printf("%d\n", ans);
    } 
    else {
        printf("1");
    }
    return 0;
}

// or
 
# include <stdio.h>
# include <math.h>
int main (int argc , char ** argv )
{
    int n, x, xn;
    int ans = 0, ans2 = 0;
    scanf("%d", &n);
    scanf("%d", &x);
    if (n > 0) {
        scanf("%d", &xn);
        ans = xn;
        if (n == 0)
        {
            ans2 = 1;
        }
        else
        {
            ans2 = xn * n;
        }
        // printf("ans - %d ans2 - %d\n", ans, ans2);
        for (int i = 0; i < n; i++) {
            scanf("%d", &xn);
            ans = (ans * x) + xn;
            if (i < n - 1)
            {
                ans2 = (ans2 * x) + (n - i - 1) * xn;
            }
            // printf("ans - %d ans2 - %d\n", ans, ans2);
        }
        printf("%d %d\n", ans, ans2);
    } 
    else {
        scanf("%d", &xn);
        printf("%d 1", xn);
    }
    return 0;
}
