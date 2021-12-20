#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int last = (int)sqrt(n);
    for (int k = 2; k <= last; k++)
    {
        if (n % k == 0)
            return 0;
    }
    return 1;
}
void test(int num)
{
    printf("Number %d is%s simple\n", num, isPrime(num) ? "" : " not");
}
void sqrt_c()
{
    test(1);
    test(2);
    test(3);
    test(4);
    test(6);
    test(7);
    test(8);
    test(9);
    test(10);
    test(141);
    test(12001);
}