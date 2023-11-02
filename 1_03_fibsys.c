
# include <stdio.h>
# include <math.h>

int main (int argc , char ** argv )
{
    int n, ans;
    ans = 0;
    scanf("%d", &n);
    int lst[44];
    lst[0] = 1;
    lst[1] = 2;
    for (int i=2; i < 44; i++) {
        lst[i] = lst[i-1] + lst[i-2];
    }
    int i = 0;
    while (n >= lst[i]) {
        i++;
    }
    i--;
    while (i >= 0) {
        if (lst[i] <= n) {
            ans++;
            n -= lst[i];
            // printf("%d ", lst[i]);
        }
        ans *= 10;
        i--;
    }
    printf("%d", ans/10);


    return 0;
}
