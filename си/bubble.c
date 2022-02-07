#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main()
{
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    int *mass;
    mass = (int *)malloc(N * sizeof(int));
    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &mass[i]);

    int tmp;
    int noSwap;

    for (int i = N - 1; i >= 0; i--)
    {
        noSwap = 1;
        for (int j = 0; j < i; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    free(mass);
    return 0;
}




// f(x) = sqrt(x) + 5*x**3
double f(double x)
{
    return (sqrt(fabs(x)) + 5.0 * pow(x, 3.0));
}
int bubble(int argc, char *argv[])
{
    double y;
    int i;

    double A[11] = {};

    for (i = 10; i >= 0; i--)
    {
        y = f(A[i]);
        if (y > 400.0)
        {
            printf("%d TOO LARGE ", i);
        }
        else
        {
            printf("%d %f ", i, y);
        }
    }
    return (0);
}