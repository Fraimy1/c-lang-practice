#include <stdio.h>
#include <math.h>

int main() {
    printf("=== C Math and Loops Demo ===\n\n");
    
    // Basic math operations
    printf("1. BASIC MATH OPERATIONS:\n");
    int a = 15, b = 4;
    float x = 7.5, y = 2.5;
    
    printf("   Integers: %d + %d = %d\n", a, b, a + b);
    printf("   Integers: %d - %d = %d\n", a, b, a - b);
    printf("   Integers: %d * %d = %d\n", a, b, a * b);
    printf("   Integers: %d / %d = %d (integer division)\n", a, b, a / b);
    printf("   Integers: %d %% %d = %d (modulus)\n", a, b, a % b);
    
    printf("   Floats: %.1f / %.1f = %.1f\n", x, y, x / y);
    printf("   Power: %.1f^2 = %.1f\n", x, pow(x, 2));
    printf("   Square root: sqrt(%.1f) = %.1f\n", x, sqrt(x));
    
    // For loop - Multiplication table
    printf("\n2. FOR LOOP - Multiplication Table (5):\n");
    int number = 5;
    for (int i = 1; i <= 10; i++) {
        printf("   %d × %d = %d\n", number, i, number * i);
    }
    
    // While loop - Factorial calculation
    printf("\n3. WHILE LOOP - Factorial Calculation:\n");
    int num = 6;
    long factorial = 1;
    int temp = num;
    
    while (temp > 1) {
        factorial *= temp;
        temp--;
    }
    printf("   %d! = %ld\n", num, factorial);
    
    // Do-while loop - Sum of numbers
    printf("\n4. DO-WHILE LOOP - Sum of First N Numbers:\n");
    int n = 5;
    int sum = 0;
    int counter = 1;
    
    do {
        sum += counter;
        printf("   Adding %d, current sum: %d\n", counter, sum);
        counter++;
    } while (counter <= n);
    
    printf("   Final sum of first %d numbers: %d\n", n, sum);
    
    // Nested loops - Pattern printing
    printf("\n5. NESTED LOOPS - Number Pyramid:\n");
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        printf("   ");
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Break and continue examples
    printf("\n6. BREAK AND CONTINUE:\n");
    printf("   Numbers 1-10 (skipping 5 and stopping at 8):\n   ");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip number 5
        }
        if (i == 9) {
            break; // Stop at 8 (before 9)
        }
        printf("%d ", i);
    }
    printf("\n");
    
    // Math with arrays
    printf("\n7. ARRAYS AND MATH:\n");
    int numbers[] = {2, 4, 6, 8, 10};
    int array_size = 5;
    int array_sum = 0;
    int array_product = 1;
    
    printf("   Array: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", numbers[i]);
        array_sum += numbers[i];
        array_product *= numbers[i];
    }
    printf("\n   Sum: %d, Product: %d, Average: %.1f\n", 
           array_sum, array_product, (float)array_sum / array_size);
    
    printf("\n=== Program Complete ===\n");
    return 0;
}