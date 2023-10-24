# include <stdio.h>
# include <math.h>
#include <stdint.h>


void revarray(void* base, size_t nel, size_t width) 
{
    char *first = base;
    char *last = base + (nel - 1) * width;
    while (first < last)
    {
        for (char i = 0; i < width; ++i) {
            char f1 = *first;
            *first = *last;
            *last = f1;
            first++;
            last++;
        }
        first = first;
        last = last - (width * 2);
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
