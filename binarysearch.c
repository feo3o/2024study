#include <stdio.h>

int binarysearch(int array[], int size, int target)
{
    int low = 0;
    int high = size;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;

        if (array[middle] > target)
        {
            high = middle - 1;
        }
        if (array[middle] < target)
        {
            low = middle + 1;
        }
        else
        {
            return middle;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarysearch(arr, size, 8);
    if (result == -1)
    {
        printf("Target not found");
    }
    else 
    {
        printf("Found at index: %d \n", result);
    }

    return 0;
}