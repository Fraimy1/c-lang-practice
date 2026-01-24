static void gcd_step(int *x, int *y)
{
    int r = *x % *y;
    *x = *y;
    *y = r;
}

int gcd(int x, int y)
{
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    while (y != 0) {
        gcd_step(&x, &y);
    }
    return x;
}
