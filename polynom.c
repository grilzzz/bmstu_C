
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

 
