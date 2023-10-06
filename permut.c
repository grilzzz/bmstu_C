# include <stdio.h>
# include <math.h>

int main (int argc , char ** argv )
{
    int x[8], y[8];
    int a = -1, i = 1;

    for (int i = 0; i < 8; i++){
        scanf("%lld", &y[i]);
    }
    for (int i = 0; i < 8; i++){
        scanf("%lld", &x[i]);
    }

    while (a == -1) {
        int f = 1;
        for (int j = 0; j < 8; j++) {
            if (x[j] == i) {
                f = 0;
            }
        }
        if (f == 1) {
            a = i;
        }
        i++;
    }
    int ans = 1;
    for (int i = 0; i < 8; i++) {
        int f = 0;
        for (int j = 0; j < 8; j++) {
            if (x[i] == y[j]) {
                y[j] = a;
                f = 1;
            }
        }
        if (f == 0) {
            ans = 0;
            break;
        }
    }
    if (ans == 0) {
            printf("no");
        }
    else {
        printf("yes");
    }
    return 0;
}
