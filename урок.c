#include <stdio.h>

void rec(int a)
{
    printf("%5d", a);
    if (a > 0)
        rec(a - 1);
}

int main(const int argc, const char **argv)
{
    rec(10);
    return 0;
}