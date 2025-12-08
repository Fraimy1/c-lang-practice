#include <stdio.h>
#include <math.h>

double factorial(int n)
{
    // calculate !N
    double res_fact = 1;

    for (int j = 1; j <= n; j++){
        res_fact *= j;
    }

    return res_fact;
}


int main(void)
{

    double eps = 0, cur_eps = 1000000000, res = 1, res_fact;
    int i = 1;
    scanf("%lf", &eps);

    
    while (cur_eps >= eps)
    {
        // printf("i =%d | eps=%.2lf | cur_eps=%.2lf\n", i, eps, cur_eps);
        res_fact = factorial(i);
        
        cur_eps = 1/res_fact;
        
        res += cur_eps;
        i++;
    }
        
    printf("%.8lf\n", res);
    
    
    // printf("%.6lf\n", exp(x));

    return 0;
}