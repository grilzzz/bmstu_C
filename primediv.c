# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main (int argc , char ** argv )
{
    long long n;
    scanf("%lld", &n);
    int lst[n];
    for (long long i = 2; i < n; i++)
    {
        if (lst[i] != 1)
        {
            int j = i + i;
            lst[i] = 0;
            while (j < n)
            {
                lst[j] = 1;
                j += i;
            }
            
        }
    }
    long long i = n - 1;
    while (lst[i] == 1 | n % i != 0)
    {
        // printf("i - %lld, lst[i] - %d, n - %lld\n", i, lst[i], n);
        i--;
    }
    printf("%lld", i);
    return 0;
}
