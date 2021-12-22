#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bucketSort(int *arr, int len)
{
    const int max = len;
    const int b = 1;
    int buck[b][max + 1];
    for (int i = 0; i < b; i++)
    {
        buck[i][max] = 0;
    }

    for (int dig = 1; dig < 100; dig *= 10)
    {
        for (int i = 0; i < max; i++)
        {

            if (arr[i] % 2 == 0)
            {
                int d = (arr[i] / dig) % b;
                buck[d][buck[d][max]++] = arr[i];
                arr[i] = -1;
            }
        }
        int idx = 0;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < buck[i][max]; j++)
            {
                while (arr[idx] != -1)
                    idx++;
                arr[idx] = buck[i][j];
            }
            buck[i][max] = 0;
        }
    }
}
int main()
{
    int a[12], n;
    printf("Enter some elements (Max. - 12): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a[i] = 1 + rand() % 9;
        printf("%d ", a[i], "\n");
    }
    printf("\n");
    bucketSort(a, n);
    printf("The sorted array is: \n");
    printArray(a, n);
    return 0;
}