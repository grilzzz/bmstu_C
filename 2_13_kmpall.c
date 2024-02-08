#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int comp(char* s, int start_ind_1, int end_ind_1, int start_ind_2, int end_ind_2)
{
    for (int i = start_ind_1; i < end_ind_1; i++)
    {
        if (s[start_ind_1] != s[start_ind_2])
        {
            return 0;
        }
        start_ind_1++;
        start_ind_2++;
    }
    return 1;
}


int* prefix_func(char* s, int len_s)
{
    int* prefix = malloc(2 * (len_s) * sizeof(int));
    prefix[0] = 0;
    int t = 0;

    for (int i = 1; i < len_s; i++)
    {
        while (t > 0 & s[t] != s[i])
        {
            t = prefix[t-1];
        }
        if (s[t] == s[i]) t++;
        prefix[i] = t;
    }
    return prefix;
}



void func(char *s, char *r, int len_s, int len_r, int* prefix)
{
    int i = 0, ind = 0;
    for (int i = 0; i < len_r; i++)
    {
        while (s[ind] != r[i] & ind > 0) ind = prefix[ind-1];
        if (r[i] == s[ind]) ind++;
        if (ind >= len_s) printf("%d ", i - len_s + 1);
    
    }
}


int main(int argc, char ** argv) 
{
    char *s = argv[1];
    char *r = argv[2];
    int len_s = strlen(s);
    int len_r = strlen(r);
    int *prefix = prefix_func(s, len_s);
    func(s, r, len_s, len_r, prefix);
    free(prefix);
    return 0;
}