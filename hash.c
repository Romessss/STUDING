#include <stdio.h>
#include <stdlib.h>

/*unsigned int crc(char *str)
{
    unsigned int c = 0;
    while (*str != '\0')
    {
        c += *str;
        str++;
    }
    return c;
}

int main(int argc, char *argv[])
{
#define SIZE 10
    int arr[SIZE] = {6, 8, 7, 3, 9, 10, 0, 4, 1, 2};
    printf("\nЗадание : CRC.\n");
    printf("\"test string\" = %d\n", crc("test string"));
}
*/
#define COINS 5
#define MAX 8

int coins[COINS] = {1,2,5,10,50};

void findMin(int cost)

{
    int coinList[MAX] = {0};
    int i, k = 0;
    for (i = COINS - 1; i >= 0; i--)
    {
        while (cost >= coins[i])
        {
            cost -= coins[i];
            coinList[k++] = coins[i]; // добавить монету в список
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", coinList[i]); //вывести
    }

    return ;
}

int main(void)

{
    int n = 98; // нужное значение
    printf("Following is minimal number of change for %d: ", n);
    findMin(n);

    return 0;
}