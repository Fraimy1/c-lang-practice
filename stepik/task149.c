#include <stdio.h>

void bubble_sort(int arr[], int n, int fl)
{
    int sorted = 0;    
    int had_sortings = 0;
    while (!sorted)
    {
        had_sortings = 0;
        for (int i = 1; i < n; i++)
        {
            if (fl ? (arr[i-1] < arr[i]) : arr[i-1] > arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = tmp;
                had_sortings = 1;
            }
        }
        if (!had_sortings)
        {
            break;
        }
    }
}

void sort_arr(int arr[], int n, int fl)
{
    bubble_sort(arr, n, fl);
}

void main()
{
    int arr[5] = {15, 2, 13, 2, 1};
    sort_arr(arr, 5, 1);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}