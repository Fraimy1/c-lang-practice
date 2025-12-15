#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *a = (int *)malloc((size_t)n * (size_t)n * sizeof(int));
    if (!a) return 0;

    int k = 1;

    for (int d = n - 1; d >= -(n - 1); --d) {
        int i_start = (d < 0) ? -d : 0;
        int i_end = n - 1 - ((d > 0) ? d : 0);

        for (int i = i_start; i <= i_end; ++i) {
            int j = i + d;
            a[i * n + j] = k++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j) printf(" ");
            printf("%d", a[i * n + j]);
        }
        if (i != n - 1) printf("\n");
    }

    free(a);
    return 0;
}
