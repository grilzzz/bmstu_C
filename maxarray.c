
#include <stdio.h>
#include <inttypes.h>

int main() {
    int compare(void* a, void* b)
    {
        long int_a = *(long*) a;
        long int_b = *(long*) b;
        printf("%ld, %ld\n", int_a, int_b);
        if (int_a > int_b)
        {
            return 1;
        }
        return 0;
    }


    int maxarray(void *base, size_t nel, size_t width,
        int (*compare)(void *a, void *b))
    {
        int max_ind = 0;
        int ind = 0;
        for (int ind = 1; ind < nel; ind++)
        {
            void* max = base + (width*max_ind);
            void* cur = base + (width*ind);
            if (compare(cur, max) == 1){
                max_ind = ind;
            }
        }
        return max_ind;
    }
    int arr[] = {1, 2, 0, 3, 2, 1, 5, 4, 2, 3}; // 6
    int ans = maxarray(arr, 10, sizeof(int), compare);
    printf("%d\n", ans);
    return 0;
}
