#include <stdio.h>
#include <stdlib.h>
#include <search.h>

int array[] = {2, 3, 7, 4, 5};

int compare(const void *a, const void *b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    qsort(array, 5, sizeof(int), compare);

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}