#include <stdio.h>
int main(void)
{
    char q;
    int res = 0;
    while(scanf("%c", &q)==1)
    {
        if (q != '0' && q != '1')
        {
            if (q == '\n') break; // Конец ввода
        }
        res = res*2+(q-'0');
    }
    printf("%i\n", res);
}