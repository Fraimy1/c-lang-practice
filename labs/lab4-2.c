// :contentReference[oaicite:0]{index=0}
#include <stdio.h>

int main(void) {
    int n;
    int p = 4;  /* group number, can be changed */

    while (scanf("%d", &n) == 1) {
        int a[8][8];
        int arr[64];
        int shifted[64];
        int len = n * n;

        /* read matrix */
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        /* extract elements in counterclockwise spiral starting from (0,0) */
        int idx = 0;
        int top = 0, bottom = n - 1, left = 0, right = n - 1;

        while (top <= bottom && left <= right) {
            /* go down along the left column */
            for (int i = top; i <= bottom; i++)
                arr[idx++] = a[i][left];

            /* go right along the bottom row */
            for (int j = left + 1; j <= right; j++)
                arr[idx++] = a[bottom][j];

            /* go up along the right column */
            if (right > left) {
                for (int i = bottom - 1; i >= top; i--)
                    arr[idx++] = a[i][right];
            }

            /* go left along the top row */
            if (bottom > top) {
                for (int j = right - 1; j > left; j--)
                    arr[idx++] = a[top][j];
            }

            top++;
            bottom--;
            left++;
            right--;
        }

        /* cyclic shift to the right by p positions */
        if (len > 0) {
            int shift = p % len;
            for (int i = 0; i < len; i++) {
                int new_pos = i + shift;
                if (new_pos >= len)
                    new_pos -= len;
                shifted[new_pos] = arr[i];
            }
        }

        /* put elements back into matrix in the same spiral order */
        idx = 0;
        top = 0;
        bottom = n - 1;
        left = 0;
        right = n - 1;

        while (top <= bottom && left <= right) {
            /* go down along the left column */
            for (int i = top; i <= bottom; i++)
                a[i][left] = shifted[idx++];

            /* go right along the bottom row */
            for (int j = left + 1; j <= right; j++)
                a[bottom][j] = shifted[idx++];

            /* go up along the right column */
            if (right > left) {
                for (int i = bottom - 1; i >= top; i--)
                    a[i][right] = shifted[idx++];
            }

            /* go left along the top row */
            if (bottom > top) {
                for (int j = right - 1; j > left; j--)
                    a[top][j] = shifted[idx++];
            }

            top++;
            bottom--;
            left++;
            right--;
        }

        /* print resulting matrix */
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }

    return 0;
}
