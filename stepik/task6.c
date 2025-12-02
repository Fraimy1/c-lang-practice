#include <stdio.h>
#include <math.h>
int main(void)
{

        double x = 2;
        double res = 1;

        // scanf("%lf", &x);

        for (int i = 1; i <= 6; i++){
            // calculate !N
            double res_fact = 1;

            for (int j = 1; j <= i; j++){
                res_fact *= j;
            }
            
            res += pow(x,i)/res_fact;
        }
        printf("%.6lf\n", res);
        printf("%.6lf\n", exp(x));

        return 0;
}