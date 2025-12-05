#include <stdio.h>
int main(void)
{
    int s1, s2, s3, m;
    scanf("%d %d %d %d", &s1, &s2, &s3, &m);

    s1 = m == 1 || (s1 && m == 0);
    s2 = m == 1 || (s2 && m == 0);
    s3 = m == 1 || (s3 && m == 0);
    
    printf("%d %d %d", s1, s2, s3);
}