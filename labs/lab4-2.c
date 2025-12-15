#include <stdio.h>

#define MAXN 8
#define P 2

int main(void) {
    int n;
    int a[MAXN][MAXN];

    if (scanf("%d", &n) != 1) return 0;
    if (n < 1 || n > MAXN) return 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 0;

    int r[MAXN * MAXN], c[MAXN * MAXN], len = 0;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (left <= right && top <= bottom) {
        for (int i = top; i <= bottom; ++i) { r[len] = i; c[len] = left; ++len; }
        ++left;
        if (left > right) break;

        for (int j = left; j <= right; ++j) { r[len] = bottom; c[len] = j; ++len; }
        --bottom;
        if (top > bottom) break;

        for (int i = bottom; i >= top; --i) { r[len] = i; c[len] = right; ++len; }
        --right;
        if (left > right) break;

        for (int j = right; j >= left; --j) { r[len] = top; c[len] = j; ++len; }
        ++top;
    }

    int v[MAXN * MAXN], nv[MAXN * MAXN];
    for (int k = 0; k < len; ++k) v[k] = a[r[k]][c[k]];

    int shift = (P % len + len) % len;
    for (int k = 0; k < len; ++k) nv[(k + shift) % len] = v[k];

    for (int k = 0; k < len; ++k) a[r[k]][c[k]] = nv[k];

    printf("\n");

    for (int k = 0; k < len; ++k) {
        if (k) printf(" ");
        printf("%d", nv[k]);
    }
    
    printf("\n\n");

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j) printf(" ");
            printf("%d", a[i][j]);
        }
        if (i != n - 1) printf("\n");
    }

    return 0;
}
