
#include <stdio.h>
#include <inttypes.h>

int main() {
    unsigned long arr[] = {1, 2, 3, 3, 7, 4, 6, 6, 8, 7};
    int less(unsigned long i, unsigned long j)
    {
        unsigned long ai = arr[i];
        unsigned long aj = arr[j];
        if (ai < aj)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    unsigned long peak(unsigned long nel,
        int (*less)(unsigned long i, unsigned long j))
    {
        unsigned long f = 0;
        unsigned long l = nel - 1;
        // printf("chek first element ")
        if (less(f, f+1) == 0)
        {
            return f;
        }
        if (less(l, l-1) == 0)
        {
            return l;
        }
        for (unsigned long i = f+1; i < l; i++)
        {
            if (less(i, i-1) + less(i, i+1) == 0)
            {
                return i;
            }
        }
    }
    printf("%lu", peak(10, less));
    return 0;
}
