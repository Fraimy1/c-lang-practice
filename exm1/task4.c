#include <stdio.h>


int main(){
    unsigned long long x = 0;
    unsigned int k = 0;
    unsigned int n = 0;
    scanf("%llu %llu %llu", &x, &k, &n);
    int nn = n*8;

    if (k==1)
    {
        unsigned long long y = x>>nn;
        printf("%llu", y);
    }
    if (k==0)
    {        
        unsigned long long y = x<<nn;
        printf("%llu", y);

    }
   
    return 0;
}