#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// const double e_value = M_E;

double func1(double x){return cos(x) - exp(-pow(x,2)/2) + x - 1;}
double func2(double x){return 1 - x + sin(x) - log(1+x);}
double func3(double x){return 3*x - 14 + exp(x) - exp(-x);}

double func1_2(double x){return -cos(x) + exp(-pow(x,2)/2) + 1;}
double func2_2(double x){return 1 + sin(x) - log(1+x);}
double func3_2(double x){return (14 - exp(x) + exp(-x))/3;}


double calculate_dichotomy(double (*func)(double), double epsilon, double left_x, double right_x){
    double length = right_x - left_x;
    double middle_x = left_x + length/2;
    double middle_y = 0;
    double left_y = 0;
    double right_y = 0;
    bool is_left = false;
    int i = 1;
    printf("Step 0: length = %lf, middle = %lf, left_x = %lf, right_x = %lf\n", length, middle_x, left_x, right_x);
    
    while (length >= epsilon)
    {
        length = right_x - left_x;
        middle_x = left_x + length/2;
        middle_y = func(middle_x);
        left_y = func(left_x);
        right_y = func(right_x);

        if (left_y*middle_y<0)
        {
            right_x = middle_x;
            is_left = true;
        }
        else if(left_y*middle_y>0)
        {
            left_x = middle_x;
            is_left = false;
        }
        else
        {
            break;
        }
        
        printf("Step %d: length = %lf, middle = %lf, left_x = %lf, right_x = %lf\n", i, length, middle_x, left_x, right_x);
        i++;
    }
    
    return middle_x;
}

// double calculate_iteratively(double (*func)(double), double epsilon, double left_x, double right_x)
// {
//     double x = (left_x + right_x)/2;
//     double x_prev = 0;
//     double lambda = 0.1;
//     int i = 1;

//     do
//     {
//         x_prev = x;
//         x = x_prev - lambda * func(x_prev);
//         printf("Step: %d: x = %lf, x_prev = %lf, diff = %lf, epsilon = %lf\n", i, x, x_prev, fabs(x_prev-x), epsilon);
//         i++;
//     } while ((fabs(x-x_prev) > epsilon) && i<100000);
    
//     return x;
// }

double calculate_iteratively(double (*func)(double), double epsilon, double left_x, double right_x)
{
    double x = (left_x + right_x)/2;
    double x_prev = 0;
    int i = 1;

    do
    {
        x_prev = x;
        x = func(x_prev);
        printf("Step: %d: x = %lf, x_prev = %lf, diff = %lf, epsilon = %lf\n", i, x, x_prev, fabs(x_prev-x), epsilon);
        i++;
    } while ((fabs(x-x_prev) > epsilon) && i<1000);
    
    return x;
}

int main() {    
    double e, left, right;
    double (*funcs[])(double) = {func1, func2, func3};
    double (*funcs2[])(double) = {func1_2, func2_2, func3_2};
    double data[][3] = {
        {0.00001, 1, 2},
        {0.00001, 1, 1.5},
        {0.00001, 1, 3}
    };
    // scanf("%lf %lf %lf", &e, &left, &right);
    
    printf("==========================\n");
    printf("Dichotomy\n");
    for (int i = 0; i<3; i++)
    {
        double result = calculate_dichotomy(funcs[i], data[i][0], data[i][1], data[i][2]);
        printf("Equation %d - Result = %lf\n", i+2, result);
        printf("==========================\n");
    }
    
    printf("==========================\n");
    printf("Iteratively\n");
    for (int i = 0; i<2; i++)
    {
        double result = calculate_iteratively(funcs2[i], data[i][0], data[i][1], data[i][2]);
        printf("Equation %d - Result = %lf\n", i+2, result);
        printf("==========================\n");
    }
}
