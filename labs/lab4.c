// #include <stdio.h>

// int main(void) {
//     int n;
//     while (scanf("%d", &n) == 1) {
//         int a[7][7];

        
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 scanf("%d", &a[i][j]);



//         for (int s = 0; s <= 2 * (n - 1); s++) {
//             int i_start = (s < n) ? s : n - 1;
//             int i_end   = (s < n) ? 0 : s - (n - 1);

//             for (int i = i_start; i >= i_end; i--) {
//                 int j = s - i;
//                 if (j >= 0 && j < n) {
//                     printf("%d ", a[i][j]);
//                 }
//             }
        
//         }


//         printf("\n");
//     }

//     return 0;
// }
