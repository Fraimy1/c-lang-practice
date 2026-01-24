int abs_arr(int arr[], int n)
{
    int count = 0;
    for (unsigned int i = 0; i < n; i++)
    {
        if (arr[i] < 0) 
        {
            arr[i] = -arr[i];
            count++;
        }
    }
    return count;
}