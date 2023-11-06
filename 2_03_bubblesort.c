
# include <stdio.h>
# include <math.h>

int main (int argc , char ** argv )
{
    int lst[] = {1,2,93,45,532,3,234,52,345,23,45,23,4,523,4,523,4,523,455,23,45,234,523,46,2367,43,57,4567,45,8,458,65};
    int compare(unsigned long i, unsigned long j)
    {
        if (lst[i] > lst[j])
        {
            return 1;
        }
        if (lst[i] < lst[j])
        {
            return -1;
        }
        return 0;
    }

    void swap(unsigned long i, unsigned long j)
    {
        long long x = lst[i];
        lst[i] = lst[j];
        lst[j] = x;
    }

    void bubblesort(unsigned long nel,
        int (*compare)(unsigned long i, unsigned long j),
        void (*swap)(unsigned long i, unsigned long j))
    {
        unsigned long l = 0, r = nel-1, cnt = 0, r1, l1;
        while (l < r & cnt < 1000)
        {
            r1 = r;
            for (unsigned long i = l; i < r1; i++)
            {
                if (compare(i, i+1) == 1)
                {
                    swap(i, i+1);
                    r = i;
                }
            }
            l1 = l;
            for (unsigned long i = r - 1; i >= l1; i--)
            {
                if (compare(i, i+1) == 1)
                {
                    swap(i, i+1);
                    l = i + 1;
                }
                if (i == 0) break;
            }
        cnt ++;
        }
    }
    // int lst[] = {1,2,93,45,532,3,234,52,345,23,45,23,4,523,4,523,4,523,455,23,45,234,523,46,2367,43,57,4567,45,8,458,65};
    bubblesort(sizeof(lst)/sizeof(int), compare, swap);
    for (int i = 0; i < sizeof(lst)/sizeof(int); i++)
    {
        printf("%d ", lst[i]);
    }
    return 0;
}
