
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


// or 


// # include <stdio.h>
// # include <math.h>
// int main (int argc , char ** argv )
// {
//     int n, x, xn;
//     int ans = 0, ans2 = 0;
//     scanf("%d", &n);
//     scanf("%d", &x);
//     if (n > 0) {
//         scanf("%d", &xn);
//         ans = xn;
//         if (n == 0)
//         {
//             ans2 = 1;
//         }
//         else
//         {
//             ans2 = xn * n;
//         }
//         // printf("ans - %d ans2 - %d\n", ans, ans2);
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &xn);
//             ans = (ans * x) + xn;
//             if (i < n - 1)
//             {
//                 ans2 = (ans2 * x) + (n - i - 1) * xn;
//             }
//             // printf("ans - %d ans2 - %d\n", ans, ans2);
//         }
//         printf("%d %d\n", ans, ans2);
//     } 
//     else {
//         scanf("%d", &xn);
//         printf("%d 1", xn);
//     }
//     return 0;
// }

# include <stdio.h>
# include <math.h>

int main (int argc , char ** argv )
{
    long long n;
    int ans[64];
    scanf("%lld", &n);
    long long lst[64];
    lst[0] = 1;
    lst[1] = 2;
    for (int i=2; i < 64; i++) {
        lst[i] = lst[i-1] + lst[i-2];
        // printf("%lld\n", lst[i]);
    }
    int i = 0;
    while (n >= lst[i]) {
        i++;
    }
    i--;
    int ind = 0;
    while (i >= 0) {
        if (lst[i] <= n) {
            // ans++;
            ans[ind] = 1;
            n -= lst[i];
            // printf("%d ", lst[i]);
        }
        else
        {
            ans[ind] = 0;
        }
        ind++;
        i--;
    }
    for (int i = 0; i < ind; i++)
    {
        printf("%d", ans[i]);
    }


    return 0;
}
