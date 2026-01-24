int linear_search(int arr[], int n, int arg)
{
    int pos = -1;
    int pivot = n / 2;
    int left = 0; 
    int right = n;

    while (pos == -1)
    {
        if (arr[pivot] == arg) 
        {
            return pivot;
        }else if (arr[pivot] < arg)
        {
            if (pivot + 1 >= n) return pos;
            left = pivot;
        }else
        {
            if (pivot + 1 >= n) return pos;
            
        }
        
        
    }
    
    return pos;
}