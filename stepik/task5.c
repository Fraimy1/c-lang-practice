#include <stdio.h>

int main(void)
{

        int N = 6;
        double res = 1;
        // scanf("%d", &x);

        for (int i = 1; i <= N; i++){
            // calculate !N
            double res_fact = 1;

            for (int j = 1; j <= i; j++){
                res_fact *= j;
            }
            
            res += 1/res_fact;
            if (i >= 3 && i< 6)
            {
                printf("%.5lf\n", res);
            }
            
        }

        return 0;
}