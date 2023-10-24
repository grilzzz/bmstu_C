# include <stdio.h>
# include <math.h>
#include <stdint.h>


void revarray(void* base, size_t nel, size_t width) 
{
    int *first = base;
    int *last = base + (nel - 1) * width;
    while (first < last)
    {
        int f1 = *first;
        *first = *last;
        *last  = f1;
        first = first + (width/4);
        last = last - (width/4);
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    revarray(arr, 10, sizeof(int));
    for (size_t i = 0; i < 10; ++i) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
