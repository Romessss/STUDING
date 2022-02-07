#include <stdio.h>
#include <string.h>

int main()
{
    return 0;
}

void binRec(int n, char *rslt)
{
    if (n <= 0)
        return;

    binRec(n / 2, rslt);
    strcat(rslt, (n % 2 == 0) ? "0" : "1");
}

int recPower(int n, int ex)
{
    if (ex <= 0)
        return 1;
    return n * recPower(n, ex - 1);
}

int recPowerFast(int n, int ex)
{
    if (ex <= 0)
        return 1;
    if (ex % 2 == 0)
        return recPowerFast(n * n, ex / 2);
    else
        return n * recPowerFast(n, ex - 1);
}

void lesson4()
{
    char bin[] = "b`";
    printf("%i : ", 5);
    binRec(5, bin);
    printf("%s\n", bin);

    printf("5^7 : %d \n", recPower(5, 7));
    printf("5^7 : %d\n", recPowerFast(5, 7));
}