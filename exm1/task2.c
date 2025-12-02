// #include <stdio.h>


// int main(){
//     double x = 0;
//     double y = 0;
//     scanf("%lf %lf", &x, &y);
//     // printf("%f %f\n", x, y);
//     // scanf("%d", );, 

//     if (x>0 & y>0){
//         printf("%d", 1);
//     }else if (x<0 & y>0)
//     {
//         printf("%d", 2);
//     }else if (x<0 & y<0)
//     {
//         printf("%d", 3);
//     }else
//     {
//         printf("%d", 4);
//     }    
    
//     return 0;
// }

#include <stdio.h>


int main(){
    int n = 0;
    float x = 0;
    float sum = 0;
    scanf("%d\n", &n);

    for (size_t i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
        // printf("%f %f\n", x, sum);
    }
    printf("%f", sum);
    
    return 0;
}