#include <limits.h>

int minmax(int arr[], int n, int fl)
{
    if (fl)
    {
        int max = INT_MIN;
        for (size_t i = 0; i < n; i++)
        {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }else
    {
        int min = INT_MAX;
        for (size_t i = 0; i < n; i++)
        {
            if (arr[i] < min) min = arr[i];
        }
        return min;
    }
}