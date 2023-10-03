# include <stdio.h>
# include <math.h>
int main (int argc , char ** argv )
{
    long long a = 0, b = 0, x, set;
    int la, lb, bin[33], k;
    scanf("%d%d", &la, &lb);
    for (int i = 0; i < la; i++) {
        scanf("%lld", &x);
        a += pow(2, x);
    }
    for (int i = 0; i < lb; i++) {
        scanf("%lld", &x);
        b += pow(2, x);
    }
    set = a&b;

    for (int i = 0; set > 0; i++) {
        if (set % 2 == 1) {
            bin[i] = 1;
        }
        else {
            bin[i] = 0;
        }
        set /= 2;
        k = i;
    }
    int ans[33];
    for (int i = 0; i < 33; i++) {
        ans[i] = -1;
    }
    // printf("k - %d\n\n", k);
    for (int i = 0; k >= 0; k--) {
        if (bin[k] == 1) {
            ans[k] = k;
            // printf("k - %d\n", k);
        }
    }

    for (int i = 0; i < 33; i++) {
        if (ans[i] != -1) {
            printf("%d ", ans[i]);
        }
    }
    return 0;
}
