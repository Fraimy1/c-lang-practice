#include <stdio.h>
#include <math.h>


const int HALF_TIME = 5570;
const double ATOMS_IN_GRAM = 7.5e10;

double get_atom_amount(double k)
{
    double lambda = log(2) / (double)HALF_TIME;
    double n = ATOMS_IN_GRAM * exp(-lambda * k);

    return n;
}

int main(void)
{
    int k;

    scanf("%d", &k);

    double n_billions = get_atom_amount(k) / pow(10, 9);

    printf("%.2lf", n_billions);

    return 0;
}
