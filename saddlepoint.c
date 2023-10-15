# include <stdio.h>
# include <math.h>
# include <stdlib.h>

int main (int argc , char ** argv )
{
    long inf = 10000000;
    long max_row[10] = {-inf, -inf, -inf, -inf, -inf, -inf, -inf, -inf, -inf, -inf}, min_cols[10] = {inf, inf, inf, inf, inf, inf, inf, inf, inf, inf};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%ld", &lst[i][j]);
            if (lst[i][j] > max_row[i])
            {
                max_row[i] = lst[i][j];
            }
            if (lst[i][j] < min_cols[j])
            {
                min_cols[j] = lst[i][j];
            }
        }

    }
    int f = 0;
    long ans;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j ++)
        {
            if (max_row[i] == min_cols[j])
            {
                ans = max_row[i];
                f = 1;
            }
            printf("%ld, %ld\n", max_row[i], min_cols[j]);
        }
    }
    if (f == 1)
    {
        printf("%ld", ans);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
