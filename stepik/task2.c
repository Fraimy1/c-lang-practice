#include <stdio.h>
#include <math.h>
int main()
{
    long long int k = 30;
    
    scanf("%ld", &k);
    
    long long int real_size = pow(2,30) * k;
    long long int fake_size = pow(10,9) * k;
    long long int diff = real_size - fake_size;
    
    printf("%lld %lld\n", real_size, fake_size);
    printf("%lld", diff);
    
    return 0;
}