
#include <stdio.h>
#include <inttypes.h>

int main() {
    unsigned long arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned long x = 10;
    int compare(unsigned long midle)
    {
        if (x > arr[midle])
        {
            return 1;
        }
        if (x < arr[midle])
        {
            return -1;
        }
        return 0;
    }

    unsigned long binsearch(unsigned long nel, int (*compare)(unsigned long i))
    {
        unsigned long first = 0;
        unsigned long last = nel;
        while (first < last)
        {
            unsigned long midle = (first + last) / 2;
            if (compare(midle) == 0)
            {
                return midle;
            }
            else
            {
                if (compare(midle) == 1)
                {
                    first = midle;
                }
                else
                {
                    last = midle;
                }
            }
        }
        return last;
        
    }
    printf("%d has number: %lu\n", x, binsearch(10, compare));
    return 0;
}
