#include "stdio.h"

int Gcd(int a, int b)
{
    while (a % b != 0)
    {
        int m = a % b;
        a = b;
        b = m;
    }
    return b;
}

int main()
{
    int a, b;
    printf("number 1 \n: ");
    scanf("%d", &a);
    printf("number 2 \n: ");
    scanf("%d", &b);
    printf("GCD = %d", Gcd(a,b));
    return 0;
}